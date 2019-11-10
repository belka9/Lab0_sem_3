#include "controller.h"


int main(int argc, char **argv) {
  try {
    controller::process(argc, argv);
  }
  catch (std::invalid_argument &ex){
    std::cout << ex.what() << std::endl;
    return 1;
  }
  return 0;
}

//g++ main.cpp controller.cpp reader.cpp parcer.cpp printer.cpp wordStat.cpp