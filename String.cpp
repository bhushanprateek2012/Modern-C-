//Implementation of strings in C++11.


#include<iostream>
#include<cstring>
#include<string> //C++ type string
const char * Combine(char *first, char *last)
{
	char *full=new char(strlen(first)+strlen(last)+1);
	strcpy(full, first);
	strcat(full, last);
	return full;
}
    std::string ToUpper(const std::string &str) 
	{
		int i=0;
		std::string temp;
		for(; i<str.length(); ++i)
		{
			temp[i]=toupper(str[i]);
		}	
		temp[i]='\n';
		return temp;
	}
    std::string ToLower(const std::string &str)
    {
    	int i=0;
    	std::string temp;
    	for(int i=0; i<str.length(); ++i)
		{
			temp[i]=tolower(str[i]);
		}	
		temp[i]='\n';
		return temp;
	}
int main(){
/*	char first[10];
	char last[10];
	std::cin.getline(first,10);
	std::cin.getline(last, 10);
	const char *fullName=Combine(first, last);
	std::cout<<fullName<<std::endl;
	delete[] fullName;
	fullName=nullptr;
*/	
	//Initialise and assign a string in C++11
/*	std::string str01="Hello";
	std::cout<<__LINE__<<"  "<<str01<<std::endl;
	str01="world";
	std::cout<<__LINE__<<"  "<<str01<<std::endl;
	
	
	//Access
	str01[0]='W';
	char ch=str01[0];
	std::cout<<__LINE__<<"  "<<str01<<std::endl;
	std::cin>>str01;
	std::cout<<__LINE__<<"  "<<str01<<std::endl;
	std::getline(std::cin, str01);
	std::cout<<__LINE__<<"  "<<str01<<std::endl;
	
	//Size
	std::cout<<str01.length();
	
	//Insert and Concatenate
	std::string str02{"July"}, str03{"Aug"};
	std::string str=str02+str03;
	std::cout<<__LINE__<<"  "<<str<<std::endl;
	str+=str02;
	std::cout<<__LINE__<<"  "<<str<<std::endl;
	str.insert(6, "World");
	
	//Comparision
	if(str01==str02)
	{
		
	}
	//Removal
	str01.erase(0,5);
	std::cout<<__LINE__<<"  "<<str01<<std::endl;
	str01.erase();
	std::cout<<__LINE__<<"  "<<str01<<std::endl;
	str01.clear();
	std::cout<<__LINE__<<"  "<<str01<<std::endl;
	
	//Search
	auto pos = str01.find("World", 0);
	std::cout<<__LINE__<<"  "<<pos<<std::endl;
*/
	//Converting string to lower case.
	std::string toLowerCase("convert me to lower case");
	std::cout<<"Lower Case is: "<< ToLower(toLowerCase )<< std::endl;
	std::string toUpperCase("convert me to upper case");
	std::cout<<"Upper Case is: "<< ToUpper(toUpperCase) << std::endl;
	return 0;
	
}
