#ifndef LAB0FORKSU_PRINTER_H
#define LAB0FORKSU_PRINTER_H
#include <map>
#include <string>
#include <list>
#include <iostream>
#include <fstream>

class printer {
 private:
  std::list<std::pair<std::string, int>> *list;
  size_t count;
 public:
  printer(std::list<std::pair<std::string, int>> *list, size_t count) : list(list), count(count) {};
  void printStatistic(const char *outFileName);
};
#endif //LAB0FORKSU_PRINTER_H
