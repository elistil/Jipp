#include "../headers/vector.h"
#include "../headers/obiekt.h"
#include "../headers/lawka.h"
#include <iostream>
#include <string.h>

Lawka::Lawka() {
	comfort = Comfort::TWARDA;
	color = Color::ZIELONY;
}

Lawka::Lawka(int x, int y, int z, Color color, Comfort comfort) {
	Lawka::position.setX(x);
	Lawka::position.setY(y);
	Lawka::position.setZ(z);
	Lawka::color = color;
	Lawka::comfort = comfort;
}

const char* Lawka::getColor() {
	switch (Lawka::color) {
		case Color::CZERWONY : {
			return "czerwony";
		}
		case Color::ZIELONY : {
			return "zielony";
		}
		case Color::NIEBIESKI : {
			return "niebieski";
		}
	};
}

const char* Lawka::getComfort() {
	switch (Lawka::comfort) {
		case Comfort::WYGODNA : {
			return "wygodna";
		}
		case Comfort::TWARDA : {
			return "twarda";
		}
	};
}

void Lawka::writeDescription() {
	std::cout << "To jest lawka o kolorze: " << Lawka::getColor();
	std::cout << " i o wygodzie: " << Lawka::getComfort() << std::endl;
}
