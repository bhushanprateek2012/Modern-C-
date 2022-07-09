#include<iostream>
//For Function Pointer, function would be declared and defined as usual
void Print (int count, char ch)
{
	using namespace std;
	for (int i=0; i<count ; i++)
	{
		cout<<ch;
	}
	cout<<endl;
}

void EndMessage()
{
	using namespace std;
	cout<<"Program Ending Now";
}

int main()
{
	//Calling function by name (normally)
	Print(5, 'A');
	//Code for Function Pointers
	//Creating function pointer
	//While creating function pointer the parameter count, type  and return type shall match with original function
	//and it should be initialised with the function name
	void (*fptr)(int, char)=Print;
	//or we can use following syntax for initialisation
	//void (*fptr)(int, char)=&Print;
	//Calling function through function pointer
	(*fptr)(5, 'B');
	//another way is 
	fptr(5, 'C');
	//using C atexit function to call a function by pointer just before exiting the program
	//Name of the function signifies the address of the function
	//atexit can be placed anywhere in the program, it is always executed at the end of program.
	atexit(EndMessage);
	return 0;
	}


