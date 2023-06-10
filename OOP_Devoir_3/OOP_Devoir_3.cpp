#include<iostream>
#include"Reservoir.h"


int main() {
	setlocale(LC_ALL, "Russian");
	Reser reserv;
	Reser reserv1;
	Reservoir* reservoir1 = new Reservoir("Mare", 400, 500, 40);
	Reservoir* reservoir2 = new Reservoir("Laghetto", 65, 5, 8);
	Reservoir* reservoir3 = new Reservoir("Stagno", 124, 54, 2);
	Reservoir* reservoir4 = new Reservoir("Piscina", 40, 10, 2);
	Reservoir* reservoir5 = new Reservoir("Largo", 23, 129, 6);
	reserv.App(reservoir1);
	reserv.App(reservoir2);
	reserv.App(reservoir3);
	reserv.App(reservoir4);
	reserv.App(reservoir5);

	reserv.Mostra();
	reserv.ConfrontareArea();

	reserv.Tipo("Mare");

	Reservoir* reservoir6 (reservoir1);
	Reservoir* reservoir7(reservoir1);
	Reservoir* reservoir8(reservoir1);

	reserv1.App(reservoir6);
	reserv1.App(reservoir7);
	reserv1.App(reservoir8);
	
	reserv1.Mostra();

	reserv1.Tipo("Mare");



	return 0;
}