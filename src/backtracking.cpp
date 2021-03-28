// #include <bits/stdc++.h> 

#include "utils/utils.hpp"

int backtracking(double weight, std::vector<Item> items, int numberOfItems, double maxProfit, int index){
  if(index == numberOfItems)
    return maxProfit;

  if(weight < items.at(index).weight)
    return backtracking(weight, items, numberOfItems, maxProfit, index + 1);
  
  double newWeight = weight - items.at(index).weight;
  double newMaxProfit = maxProfit + items.at(index).value;

  double withItem = backtracking(newWeight, items, numberOfItems, newMaxProfit, index + 1);
  double withoutItem = backtracking(weight, items, numberOfItems, maxProfit, index + 1 );

  return std::max(withItem, withoutItem);
}

int main(int argc, char *argv[]){
  int numberOfItems;
  double knapsackCapacity;
  std::vector<Item> items;
  std::string fileName = std::string(argv[1]);
  int index = 0;
  int maxProfit = 0;
  fileExtraction(fileName, items, &numberOfItems, &knapsackCapacity);

  auto start = std::chrono::steady_clock::now();
  double result = backtracking(knapsackCapacity, items, numberOfItems, maxProfit, index);
  auto duration = std::chrono::steady_clock::now() - start;
  auto finalDuration = std::chrono::duration<double, std::milli>(duration).count();

  std::cout << "Result is: " << result << std::endl;
  std::cout << "Duration: " << finalDuration << " milliseconds." << std::endl;

  saveCSV(fileName, duration, result, "backtracking");

  return 0;
}

