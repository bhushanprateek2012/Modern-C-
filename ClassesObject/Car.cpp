#include"Car.h"
#include <iostream>
int Car::totalCars=0;
Car::Car():Car(0)
{
	std::cout<<"Car()"<<std::endl;
/*	
	totalCars++;
	std::cout<<"Constructor Called"<<std::endl;
	//Creating a default constructor, and assigning default values 
/*	fuel=0;
	speed=0;
	passengers=0;
*/	
}
Car::Car(int amount): Car(amount, 0)
{
	std::cout<<"Car(amnt)"<<std::endl;
/*	totalCars++;
	std::cout<<"Parameterised Constructor Called"<<std::endl;
	//Creating a parameterised constructor, and assigning default values 
	fuel=amount;
/*	speed=0;
	passengers=0;
*/	
}
Car::Car(float amount, int pass)
{
	std::cout<<"Car(amnt, pass)"<<std::endl;	
	//Common initialization code is kept in this constructor where all the parameters are initialized.
	totalCars++;
	std::cout<<"Parameterised Constructor Called"<<std::endl;
	//Creating a parameterised constructor, and assigning default values 
	fuel=amount;
	passengers=pass;
	speed=0;
}

Car::~Car()
{
	totalCars--;
	std::cout<<"Destructor Called"<<std::endl;
}

void Car :: FillFuel(float amount){
	fuel=amount;
}
void Car :: Accelerate(){
	speed++;
	fuel -= 0.5f;
}
void Car :: Break(){
	speed=0;
}
void Car :: AddPassengers(int count){
	passengers=count;
}
void Car :: Dashboard() const {
	std::cout<<"Fuel: "<<fuel<<std::endl;
	std::cout<<"Speed: "<<speed<<std::endl;
	std::cout<<"Passenger: "<<passengers<<std::endl;
	std::cout<<"Total Cars :"<<totalCars<<std::endl;
	
}

void Car::showCount()
{
	std::cout<<"Total Cars :"<<totalCars<<std::endl;
}
/*
Constructors:
Called  automatically when instance of a class is created.
Types of constructors are:
-Default Constructors
	Called automatically without arguments when no other constructor is defined in the class.
-Parameterised Constructors
	If it is present, default constructor is not called.
-Copy Constructors
	
-Delegating Constructors
-Inheriting Constructors
-Destructor
	Called automatically, when object is destroyed.
	cannot be overloaded, thus doesnot requires arguments and have same name as that of class.
*/


/*
Constant Member Functions
Members fucntions are qualifid with const keyword in both declaration and definition
they cannot change value of any member variables
they are used for creating read only functions
Constant objects can invoke only constant member functions.
Functions which do not change the state of the object shall be qualified with const keywork.
In our example, Dashboard function does not change the state of the object thus shall be qualified with const keywork.
Only Const object can invoke constant member functions.

*/


/*
Copy Constructor
To copy object's state in another object
synthesized automatically  if not defined by user
by default copies value of one object to another, this is not desirable in case of pointer.
*/	

/*
Delegating Constructors:
Allows a constructor to invoke another constructor
Replacement for common initialization
Reduces duplicate initialization code  in multiple constructors
syntax:
This class contains 2 constructors,
Default and Paramenterised./
Parameterised Constructor contains the default initialisation code.
Default Constructor delegates the initialisation to parameterised constructor. It passes default values to 
the parameterised constructor, so that initialisation code occurs only once.
class Class{
	Class():Class(val1, val2){
		Class(arg1, arg2){
		//initialization code
};
*/
