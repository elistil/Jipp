#include "../headers/vector.h"
#include "../headers/obiekt.h"
#include "../headers/taczka.h"
#include <iostream>

Taczka::Taczka() {
	Taczka::capacity = 0;
}

Taczka::Taczka(float nosnosc) {
	Taczka::capacity = capacity;
}
float Taczka::getCapacity() {
	return Taczka::capacity;
}
void Taczka::writeDescription() {
	std::cout << "To jest taczka o nosności: " << Taczka::capacity << std::endl;
}
