#include "BrazoRobotico.h"
BrazoRobotico::BrazoRobotico(){
	x = 0.0; 
        y = 0.0;
        z = 0.0;
        Sujetar = false;
}

double BrazoRobotico::getx()const{
	return x;
}

double BrazoRobotico::gety()const{
	return y;
}

double BrazoRobotico::getz()const{
	return z;
}

bool BrazoRobotico::getSujetar()const{
	return Sujetar;
}

void BrazoRobotico::coger(){
	Sujetar = true;
}

void BrazoRobotico::dejar(){
	Sujetar = false;
}

void BrazoRobotico::mover(double x, double y, double z){
	this -> x = x;
	this -> y = y;
	this -> z = z;
}

