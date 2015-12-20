#ifndef VECTOR_H
#define VECTOR_H

class Vector {
	private:
		int x;
		int y;
		int z;
	public:
		Vector();
		Vector(int x);
		Vector(int x, int y);
		Vector(int x, int y, int z);
		int getX();
		int getY();
		int getZ();
		void setX(int);
		void setY(int);
		void setZ(int);
};
#endif
