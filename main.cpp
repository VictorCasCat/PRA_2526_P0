#include <iostream>
#include "Brazorobotico.h"
using namespace std;

void main(){

	BrazoRobotico Brazo;
	cout<< " Posicion x,y,z: ("<< Brazo.getx() << "," << Brazo.gety() "," << Brazo.getz() ")"<< endl;
	cout<< "Moviendo brazo a la posicion x=10, y=20, z=30"
	Brazo.mover(10,20,30);
	Brazo.coger();

	
	BrazoRobotico Brazo;
	cout<< " Posicion x,y,z: ("<< Brazo.getx() << "," << Brazo.gety() "," << Brazo.getz() ")"<< endl;
	cout<< "Moviendo brazo a la posicion x=40, y=50, z=60"
	Brazo.mover(40,50,60);
	Brazo.Dejar();


	BrazoRobotico Brazo;
	cout<< " Posicion x,y,z: ("<< Brazo.getx() << "," << Brazo.gety() "," << Brazo.getz() ")"<< endl;
	cout<< "Volviendo a posicion x=0, y=0, z=0"
	Brazo.mover(0,0,0,);


}
