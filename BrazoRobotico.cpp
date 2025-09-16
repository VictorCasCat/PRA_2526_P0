#include <iostream>
#include "BrazoRobotico.h"

double getx(){
	return x;
}

double gety(){
	return y;
}

double getz(){
	return z;
}

bool getSujetar(){
	return Sujetar;
}

void coger(){
	Sujetar = true;
}

void dejar(){
	Sujetar = false;
}

//Asignacion de las coordenadas iniciales.
BrazoRobotico::Brazorobotico(){
	x = 0.0;
	y = 0.0;
	z = 0.0;
	Sujetar = false;
}

double mover(double x, double y, double z){
	this -> x = x;
	this -> y = y;
	this -> z = z;
}

void main(){

	
return 0;

}
