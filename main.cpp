#include <iostream>
//#include <windows.h>
#include "headers/vector.h"
#include "headers/obiekt.h"
#include "headers/taczka.h"

int main(int argc, char* argv[]) {

	Obiekt* obiekt = new Taczka(10);

	obiekt->writeDescription();

	std::cout << "Enter to exit the program: ";
	std::cin.ignore().get();

	return 1;
}
