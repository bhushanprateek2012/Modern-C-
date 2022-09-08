#include <iostream>
class Animal{
	public: 
	void Eat()
	{
		std::cout<<"Animal Eating"<<std::endl;
		
	}
	void Run()
	{
		std::cout<<"Animal Running"<<std::endl;
		
	}
	void Speak()
	{
		std::cout<<"Animal Speaking"<<std::endl;
		
	}
};
class Dog: public Animal{
	public:
	void Eat()
	{
		std::cout<<"Dog Eats"<<std::endl;
		
	}
	void Speak()
	{
		std::cout<<"Dog Barks"<<std::endl;
		
	}
};
int main()
{
	Dog d;
	d.Eat();
	d.Run();
	d.Speak();
	return 0;
}
