# include <iostream>


class BrazoRobotico {
	private:
		double x,y,z;
		bool Sujetar;
	public:
		BrazoRobotico();
		double getx() const;
		double gety() const;
		double getz() const;
		bool getSujetar() const;
		void coger();
		void dejar();
		void mover(double,double,double);


}; 
