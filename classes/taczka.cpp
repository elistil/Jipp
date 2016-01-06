#include "../headers/vector.h"
#include "../headers/obiekt.h"
#include "../headers/taczka.h"
#include <iostream>

Taczka::Taczka() {
	Taczka::nosnosc = 0;
}

Taczka::Taczka(float nosnosc) {
	Taczka::nosnosc = nosnosc;
}
float Taczka::getNosnosc() {
	return Taczka::nosnosc;
}
void Taczka::writeDescription() {
	std::cout << "To jest taczka o nosności: " << Taczka::nosnosc << std::endl;
}
