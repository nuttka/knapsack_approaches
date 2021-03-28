#include <bits/stdc++.h> 

#include "utils/utils.hpp"

int bound(Node node, int n, int weight, std::vector<Item> arr){
  if(node.weight >= weight)
    return 0;

  int profitBound = node.profit;

  int nextItem = node.level + 1;
  int totalWeight = node.weight;

  while((nextItem < n) && (totalWeight + arr[nextItem].weight <= weight)){
    totalWeight += arr[nextItem].weight;
    profitBound += arr[nextItem].value;
    nextItem++;
  }

  if(nextItem < n)
    profitBound += (weight-totalWeight)*arr[nextItem].value/arr[nextItem].weight;

  return profitBound;
}

int branchAndBound(double weight, std::vector<Item> arr, int numberOfItems){
  std::sort(arr.begin(), arr.end(), [](Item a, Item b){
    return ((double)a.value/a.weight)>((double)b.value/b.weight);
  });

  std::queue<Node> tree;
  Node currentNode, nextNode;

  currentNode.level = -1;
  currentNode.profit = 0;
  currentNode.weight = 0;

  tree.push(currentNode);

  int maxProfit = 0;

  while(!tree.empty()){
    currentNode = tree.front();
    tree.pop();

    if(currentNode.level == numberOfItems-1)
      continue;

    nextNode.level = currentNode.level + 1;
    nextNode.weight = currentNode.weight + arr[nextNode.level].weight;
    nextNode.profit = currentNode.profit + arr[nextNode.level].value;

    if(nextNode.weight <= weight && nextNode.profit > maxProfit)
      maxProfit = nextNode.profit;

    nextNode.bound = bound(nextNode, numberOfItems, weight, arr);
    
    if(nextNode.bound > maxProfit)
      tree.push(nextNode);

    nextNode.weight = currentNode.weight;
    nextNode.profit = currentNode.profit;
    nextNode.bound = bound(nextNode, numberOfItems, weight, arr);

    if(nextNode.bound > maxProfit)
      tree.push(nextNode);
  }

  return maxProfit;
}

int main(int argc, char *argv[]){
  int numberOfItems;
  double knapsackCapacity;
  std::vector<Item> items;
  std::string fileName = std::string(argv[1]);

  fileExtraction(fileName, items, &numberOfItems, &knapsackCapacity);

  auto start = std::chrono::steady_clock::now();
  double result = branchAndBound(knapsackCapacity, items, numberOfItems);
  auto duration = std::chrono::steady_clock::now() - start;
  auto finalDuration = std::chrono::duration<double, std::milli>(duration).count();

  std::cout << "Result is: " << result << std::endl;
  std::cout << "Duration: " << finalDuration << " milliseconds." << std::endl;

  saveCSV(fileName, duration, result);

  return 0;
}

