#ifndef OBIEKT_H
#define OBIEKT_H

class Obiekt {
	protected:
		Vector position;
		Vector speed;
	public:
		Obiekt();
		Vector getPosition();
		Vector getSpeed();
		void setSpeed(int, int, int);
		void setPosition(int, int, int);
		virtual void writeDescription() {};
};

#endif
