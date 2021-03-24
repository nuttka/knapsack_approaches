#include "utils.hpp"

void fileExtraction(std::string fileName, std::vector<Item> &items, int *amountOfItems, double *maximumCapacity){
  std::ifstream file;
  file.open(fileName, std::ios::in);
  std::string readBuffer;

  file >> readBuffer;
  *amountOfItems = atoi(readBuffer.c_str());

  file >> readBuffer;
  *maximumCapacity = ::atof(readBuffer.c_str());

  for(int i=0; i<*amountOfItems; i++){
    Item newItem;
    file >> readBuffer;
    newItem.value = ::atof(readBuffer.c_str());
    file >> readBuffer;
    newItem.weight = ::atof(readBuffer.c_str());

    items.push_back(newItem);
  }

  file.close();
};