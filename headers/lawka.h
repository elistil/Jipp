#include "obiekt.h"

#ifndef LAWKA_H
#define LAWKA_H

enum class Color {CZERWONY, ZIELONY, NIEBIESKI};
enum class Comfort {TWARDA, WYGODNA};

class Lawka : public Obiekt {
	protected:
		Color color;
		Comfort comfort;
	public:
		Lawka();
		Lawka(int, int, int, Color, Comfort);
		const char* getColor();
		const char* getComfort();
		void writeDescription() override;
};

#endif
