#include<iostream>

void Add(int a, int b, int &result)
{
	result=a+b;
}

void Factorial(int a, int &result)
{
	for(int i=1;i<=a;i++)
	{
		result=result*i;
	}
}

void Swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
	
	
}
int main()
{
	using namespace std;
	//For loops practice, 
	//good to use  old style for loop for finer control over the loop
	//Range based for loops are beneficial  when looping full range.  
	int arr[]={1,2,3,4,5};
	/*for(int i=0; i<5; i++)
	{
		cout<<"Normal For Loop:  "<<arr[i]<<endl;
	}
	//Range based for loops examples.
	for(int x: arr)
	{
		cout<<"From Range: "<<x<<endl;
	}
	//Range based for loop with const and references
	for(const auto &x: arr) //const to restrict changing of values through reference
	{
		//x=3;
		cout<<"Const Auto: "<<x<<endl;
	}
	
	//Range based for loop with auto and reference
	for(auto &x: arr)
	{
		x=3;
		cout<<"Auto: "<<x<<endl;
	}
	
	//For loops through range in lists
	for(const auto &x: {100, 101, 102, 103, 104, 105}) //const to restrict changing of values through reference
	{
		//x=3;
		cout<<"Const Auto: "<<x<<endl;
	}
	*/
	
	//Pseudo Code for Range Based for loop.
	//Actual Code
	for(int x: arr)
	{
		cout<<"Actual Code: "<<x<<endl;
	}
	//Pseudo Code
	auto &&range=arr;
	//auto beg= std::begin(arr);
	//auto end=  std::end(arr);
	auto beg= std::begin(range);
	auto end=  std::end(range);
	
	for (; beg!=end; ++beg)
	{
		auto v=*beg;
		cout<<"Pseudo Code: "<<v<<endl;
	}
	
	
	
	
	
	
	/*
	//Code for Adding Numbers
	int alpha{5}, beta{10}, out=0;
	int &final=out;
	Add(alpha, beta, final);
	
		cout<<"Output is"<<final;
		*/
	/*
	//Code  for  Factorial
	int a=0, result=1;
	cin>>a;
	Factorial(a, result);
	cout<<"Factorial is: "<<result;
	return 0;
	*/
	/*
	//Code for Swapping two numbers
	int a{10}, b{5};
	Swap(a,b);
	cout<<"a: "<<a <<"\nb: "<<b;
	*/
	
	/*
	//Try to modify x1 & x2 and see the compilation output
	int x = 5 ;
	const int MAX = 12 ;
	int &ref_x1 = x ;
	const int &ref_x2 = x ;
	//ref_x1=ref_x1+1;
	//ref_x2=ref_x2+1;
	 
	//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
	const int *ptr1 = &x ;
	int *const ptr2 = &x ;
	const int * const ptr3 = &x ;
	 //*ptr1=*ptr1+1;
	 x=x+1;
	 cout<<x;
	 
	//Find which declarations are valid. If invalid, correct the declaration
	//ptr3 = &MAX ;
	const int *ptr4 = &MAX ;
	 
	const int &r1 = ref_x1 ;
	const int &r2 = ref_x2 ;
	 
	const int *p_ref1 = ptr1 ;
	const int*p_ref2 = ptr2 ;
	*/
}
