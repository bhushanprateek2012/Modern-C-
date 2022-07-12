#include "Integer.h"
#include <iostream>
#include <memory>
//Code with the use of Raw Pointers
void Display(Integer *p)
{
	if(p==nullptr)
	{
		return;
	}
	std::cout<<p->GetValue()<<std::endl;
}
Integer * Getpointer(int value)
{
	Integer *p=new Integer{};
	return p;
}
/*
Operate function for Raw Pointer
void Operate(int value)
{
	Integer *p=Getpointer(value);
	if(p==nullptr)
	{
		p=new  Integer{value};
	}
	p->SetValue(100);
	Display(p);
	delete p;
	p=nullptr;
	p=new Integer{};
	*p=__LINE__;
	Display(p);
	 delete p;
	p=nullptr;
}
*/

//Operate function for smart pointer
void Store01(std::unique_ptr<Integer> &p)
{
	std::cout<<"Pass by reference is used to STORE001"<<std::endl;
}
void Store02(std::unique_ptr<Integer> p)
{
	std::cout<<"P is moved and is used to STORE002"<<std::endl;	
}

void Operate(int value)
{
//	Integer *p=Getpointer(value); converting to smart pointer syntax
// unique_ptr is a type of smart pointer
	std::unique_ptr<Integer> p{Getpointer(value)};
	if(p==nullptr)
	{
		//p=new  Integer{value};
		p.reset(new Integer{value});
	}
	p->SetValue(100);
	Display(p.get()); //to convert unique_ptr to Integer *
//	delete p;
//	p=nullptr;
	p.reset(new Integer{});
	*p=__LINE__;
	Display(p.get());
	 //delete p;  not required as now p is a object and not a pointer
	//p=nullptr;
	//Copy of unique_ptr cannot be created that's why either move or pass by reference method is used for passing address to Store functions.
	Store01(p); //Passsing pointer by reference so that we can continue using the uniqueptr p
	Store02(std::move(p));//moving the pointer p, after move,the ownership of the p would be shifted to Store02 functions and would not be able to use it in current function.
	
}

int main() {
	Operate(5);
	return 0;
}
