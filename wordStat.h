#ifndef LAB0FORKSU_WORDSTAT_H
#define LAB0FORKSU_WORDSTAT_H
#include <map>
#include <string>
#include <list>
#include <iostream>
#include <fstream>

class wordStat{
private:
  std::map<std::string, int> *map;
  std::list<std::pair<std::string, int>> list;

public:
	wordStat(std::map<std::string, int> *referenceMap, int counter) : map(referenceMap) {}
	void sortStatistic();
	std::list<std::pair<std::string, int>> *getList(){
		return &list;
	}
};


#endif //LAB0FORKSU_WORDSTAT_H