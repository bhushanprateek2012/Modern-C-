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
