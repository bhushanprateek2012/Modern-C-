#include<iostream>
int Add(int a, int b)
{
	return a+b;
}
double Add(double a, double b)
{
	return a+b;
}
void Print(int *a)
{
	using namespace std;
	cout<<"normal"<<a<<endl;
}
void Print(const int* a)
{
	using namespace std;
	cout<<"const"<<a<<endl;
}
int main()
{
	using namespace std;
	
	//Code for Function Overloading
	
	auto i=Add(3,5);
	cout<<"int : "<<i<<endl;
	auto j=Add(3.5,5.5);
	cout<<"double : "<<j<<endl;
	//Function Overloading example with pointers
	int  pi=5;
	Print(&pi);
	const int pci=10;
	Print(&pci);
	return 0;
}


//Function Overloading is a example of Static Polymorphism.
//Here linker identifies the relevant function through Name Mangling. i.e. Each function is assigned a 
//seperate function name.
//Mangled names can be seen in the map file. 
//Map file can be generated through settings in Dev C++  and VS Code.
//Name Mangling can be stopped by using extern "C" while declaring and defining the function. 
//
