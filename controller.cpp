#include "controller.h"

//центральный мозг, создающий объекты класса

int controller::process(const int argc, char **argv){
  if (argc < 3){
    throw std::invalid_argument("Too few arguments (2 needed!!!)");
  }
  reader Rd(argv[1]);
  parcer Par;
  std::string buffer; 
  while(Rd.readWord(&buffer)){
    Par.parceBuffer(buffer);
    buffer = Rd.readWord(&buffer);
  }
  wordStat St(Par.getMap(), Par.getCounter());
  St.sortStatistic();
  printer Pr(St.getList(), Par.getCounter());
  Pr.printStatistic(argv[2]);
    
  return 0;
}