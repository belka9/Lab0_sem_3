#ifndef LAB0FORKSU_READER_H
#define LAB0FORKSU_READER_H
#include "parcer.h"
#include <string>
#include <fstream>

class reader {
	private:
		std::ifstream in;

	public:
		reader(const char *inFileName);

		bool readWord(std::string *buffer);

};

#endif //LAB0FORKSU_READER_H
