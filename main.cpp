#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

int main(){

	BrazoRobotico Brazo;
	cout<< " Posicion x,y,z: ("<< Brazo.getx() << "," << Brazo.gety() << "," << Brazo.getz() << ")"<< endl;
	cout<< "Moviendo brazo a la posicion x=10, y=20, z=30"<< endl;
	Brazo.mover(10,20,30);
	Brazo.coger();

	
	cout<< " Posicion x,y,z: ("<< Brazo.getx() << "," << Brazo.gety() << "," << Brazo.getz() << ", esatdo de la pinza: " << Brazo.getSujetar() <<  ")"<< endl;
	cout<< "Moviendo brazo a la posicion x=40, y=50, z=60"<< endl;
	Brazo.mover(40,50,60);
	Brazo.dejar();


	cout<< " Posicion x,y,z: ("<< Brazo.getx() << "," << Brazo.gety() <<  "," << Brazo.getz() << ", estado de la pinza: "<< Brazo.getSujetar() << ")"<< endl;
	cout<< "Volviendo a posicion x=0, y=0, z=0"<< endl;
	Brazo.mover(0,0,0);

return 0;
}
