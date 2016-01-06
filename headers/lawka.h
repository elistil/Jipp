#include "obiekt.h"

#ifndef LAWKA_H
#define LAWKA_H

enum class Color {CZERWONY, ZIELONY, NIEBIESKI};
enum class Wygoda {TWARDA, WYGODNA};

class Lawka : public Obiekt {
	protected:
		Color color;
		Wygoda wygoda;
	public:
		Lawka();
		Lawka(Vector, Color, Wygoda);
		char* getColor();
		char* getWygoda();
		void writeDescription() override {};
};

#endif
