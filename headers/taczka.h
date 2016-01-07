#include "obiekt.h"

#ifndef TACZKA_H
#define TACZKA_H

class Taczka : public Obiekt {
	protected:
		float capacity;
	public:
		Taczka();
		Taczka(float);
		float getCapacity();
		void writeDescription() override;
};

#endif
