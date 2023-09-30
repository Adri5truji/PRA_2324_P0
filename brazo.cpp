#include "brazo.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool objeto){
	this-> x = x;
	this-> y = y;
	this-> z = z;
	this-> objeto = objeto;
}

double BrazoRobotico:: getX(){
	return x;
}

double BrazoRobotico::getY(){
	return y;
}

double BrazoRobotico::getZ(){
	return z;
}

bool BrazoRobotico::getObjeto(){
	return objeto;
}

void BrazoRobotico::coger(){
	objeto = true;
}

void BrazoRobotico::soltar(){
	objeto = false;
}

void BrazoRobotico::mover(double a, double b, double c){
	x += a;
	y += b;
	z += c;
}

int main(){
	BrazoRobotico ur(0,0,0,false);

	ur.mover(2.3,4.7,8.3);
	ur.coger();

	std::cout << "El brazo está en la posición " << "(" << ur.getX() << ", " << ur.getY() << ", " << ur.getZ() << ")" << std::endl;
	if(ur.getObjeto() == true)
		std::cout << "El brazo ha cogido el objeto" << std::endl;
	if(ur.getObjeto() == false)
		std::cout << "El brazo no sujeta ningun objeto" << std::endl;
}
