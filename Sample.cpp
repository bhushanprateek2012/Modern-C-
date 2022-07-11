#include<iostream>
class Integer{
	int n_Value {0};//basic initialization can  be done here also.
	
	public:
		Integer() = default; //Informing compiler to create a default implementation of this 
		//constructor 
		//Default can be used for default const, destuctor and copy constructor.
	/*	Integer(){
			n_Value=0;
		}
	*/
		Integer(int value){
			n_Value=value;
		}
		void setValue(int val)
		{
			n_Value=val;
		}
		void setValue(float val)=delete; 
		//set to delete so that no one can call the setValue fucntion with float
		//as it is defined to cater integer only
		

};

int main(){
	Integer i1;
	i1.setValue(1);
	Integer i2(3);
	return 0;
}
//Another keyword is delete.
//In case you dont want to have copy constructor defined by user or implemented by compiler by default,
//you can put delete with copy constructor so that no one can create copy of the object
