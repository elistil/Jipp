#include "../headers/vector.h"
#include "../headers/obiekt.h"
#include <iostream>

Obiekt::Obiekt() {
	Obiekt::speed.setX(0);
	Obiekt::speed.setY(0);
	Obiekt::speed.setZ(0);
	Obiekt::position.setX(0);
	Obiekt::position.setY(0);
	Obiekt::position.setZ(0);
}
void writeDescription() {
	std::cout << "To jest obiekt materialny" << std::endl;
}
Vector Obiekt::getPosition() {
	return Obiekt::position;
}
Vector Obiekt::getSpeed() {
	return Obiekt::speed;
}
void Obiekt::setSpeed(int x, int y, int z) {
	Obiekt::speed.setX(x);
	Obiekt::speed.setY(y);
	Obiekt::speed.setZ(z);
}
void Obiekt::setPosition(int x, int y, int z) {
	Obiekt::position.setX(x);
	Obiekt::position.setY(y);
	Obiekt::position.setZ(z);
}
