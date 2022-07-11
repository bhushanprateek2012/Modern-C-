#include <iostream>
#include "Car.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Car::showCount();
	Car car(5);
	const Car ConstSample(10);
//	car.FillFuel(10);
/*	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.AddPassengers(20);
*/	car.Dashboard();
	Car::showCount();
	ConstSample.Dashboard();
	return 0;
}
