#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <vector>
#include <utility>
#include <fstream>

typedef struct Node{
  int level;
  double profit;
  double weight;
  double bound; 
} Node;

typedef struct Item{
  double value;
  double weight;
} Item;

void fileExtraction(std::string, std::vector<Item>&, int*, double*);

#endif