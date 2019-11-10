#include "reader.h"

reader::reader(const char *inFileName) {

  in.open(inFileName);
  
  if (!in.is_open()){
    throw std::invalid_argument("Can`t open inFile");
  }
}

bool reader::readWord(std::string *buffer) {
  if (std::getline(in, *buffer)){
	  return true;
  }
  return false;
}