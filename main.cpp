#include <iostream>
//#include <windows.h>
#include "headers/vector.h"
#include "headers/obiekt.h"
#include "headers/taczka.h"
#include "headers/lawka.h"

int main(int argc, char* argv[]) {

	Obiekt* obiekt = new Taczka(10);
	Obiekt* obiekt2 = new Lawka(1, 2, 3, Color::NIEBIESKI, Comfort::TWARDA);

	obiekt->writeDescription();
	obiekt2->writeDescription();

	std::cout << "Enter to exit the program: ";
	std::cin.ignore().get();

	return 1;
}
