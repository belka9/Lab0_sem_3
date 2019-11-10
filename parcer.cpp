#include "parcer.h"

//выделяет из текста отдеьные слова , кладет их в мапу

static bool separator(const char &c){//определяет что есть разделитель
  return (isdigit(c) || isalpha(c));
}

void parcer::parceBuffer(const std::string &buffer) {

  std::string keyString;// для действующего слова
  int length = buffer.length();
  for (int i = 0; i <= length; i++){
    if (separator(buffer[i])){
      keyString += buffer[i];
    } else {
      if (!keyString.empty()){
        (map)[keyString]++;
        keyString.clear();
        counter++;
      }
    }
  }
}

