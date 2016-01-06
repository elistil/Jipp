#include "obiekt.h"

#ifndef TACZKA_H
#define TACZKA_H

class Taczka : public Obiekt {
	protected:
		float nosnosc;
	public:
		Taczka();
		Taczka(float);
		float getNosnosc();
		void writeDescription() override;
};

#endif
