#include "wordStat.h"

void wordStat::sortStatistic() {
  
  for (const auto &mp : *map){ 
    list.emplace_back(std::make_pair(mp.first, mp.second));
  }

  list.sort([](auto  &left, auto &right){
    return left.second > right.second;
  });
}
