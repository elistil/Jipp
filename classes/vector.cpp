#include "../headers/vector.h"

Vector::Vector() {
	Vector::x = 0;
	Vector::y = 0;
	Vector::z = 0;
}
Vector::Vector(int x) {
	Vector::x = x;
	Vector::y = 0;
	Vector::z = 0;
}
Vector::Vector(int x, int y) {
	Vector::x = x;
	Vector::y = y;
	Vector::z = 0;
}
Vector::Vector(int x, int y, int z) {
	Vector::x = x;
	Vector::y = y;
	Vector::z = z;
}
int Vector::getX() {
	return Vector::x;
}
int Vector::getY() {
	return Vector::y;
}
int Vector::getZ() {
	return Vector::z;
}
