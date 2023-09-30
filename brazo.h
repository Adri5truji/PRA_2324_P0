#include <iostream>

class BrazoRobotico{
	private:
		double x;
		double y;
		double z;
		bool objeto;
	public:
		BrazoRobotico(double x, double y, double z, bool objeto);
		double getX();
		double getY();
		double getZ();
		bool getObjeto();
		void coger();
		void soltar();
		void mover(double a, double b, double c);
};
		
