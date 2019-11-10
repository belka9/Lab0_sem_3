#ifndef LAB0FORKSU_PARCER_H
#define LAB0FORKSU_PARCER_H
#include <map>
#include <iostream>

class parcer {
 private:
  std::map<std::string, int> map;
  size_t counter = 0;

 public:
  
  std::map<std::string, int> *getMap(){
    return &map;
  }

  void parceBuffer(const std::string &buffer);

  size_t getCounter(){
    return counter;
  }
};

#endif //LAB0FORKSU_PARCER_H
