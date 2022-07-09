#include<iostream>
/*
Namespace:
Its  a declarative region used for declaring types.
types are not visible outside namespace
Standard Library is in std namespace
Prevents name clashes and helps in modularising the code

Creating a namespace
namespace <name> {
	(namespace, class, structure, fucntion, variable, etc)
}


*/
namespace Avg{
	float Calculate(int a, int b)
	{
		return (a+b)/2;
	}
}
namespace Basic{
	float Calculate(int a, int b)
	{
		return (a+b);
	}	
}
namespace Sorting{
	void QuickSort(){
		
	}
	void InsertSort(){
		
	}
	void MergeSort(){
		
	}
	namespace Comparision{
		void Greater()
		{
			
		}
		void Less()
		{
			
		}
	}
}

int main()
{
	//Can open complete namespace as
	using namespace Avg;
	Calculate(5,10); //Function called from Avg namespace
	
	Basic::Calculate(15, 20); //Function called from Basic namespace
	
	//Calling function using fully qualified name
	Sorting::Comparision::Greater();
	return 0;
}


