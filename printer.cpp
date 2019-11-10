#include "printer.h"

//сортирует и выводит в выходной файл

void printer::printStatistic(const char *outFileName) {
  std::ofstream out(outFileName);
  
  for (const auto &ls : *list){
    out << ls.first << ";" << ls.second << ";" << ls.second / (double)count * 100 << std::endl;
  }
}