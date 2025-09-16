# include <iostream>


class BrazoRobotico {
	private:
		double x,y,z;
		bool Sujetar;
	public:
		BrazoRobotico();
		double getx();
		double gety();
		double getz();
		bool getSujetar();
		void coger();
		void dejar();
		double mover(double,double,double);


} 
