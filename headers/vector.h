#ifndef VECTOR_H
#define VECTOR_H

class Vector {
	private:
		int x;
		int y;
		int z;
	public:
		Vector();
		/*Vector(int);
		Vector(int, int);*/
		Vector(int, int, int);
		int getX();
		int getY();
		int getZ();
		void setX(int);
		void setY(int);
		void setZ(int);
};
#endif
