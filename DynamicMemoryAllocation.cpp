#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>


//Memory allocation in C is through malloc, calloc and realloc.

void Malloc() {
	//int *p = (int*)calloc(5, sizeof(int)); //calloc(number of elements, size of elements)
	int *p = (int*)malloc(5 * sizeof(int)); //
	//when malloc fails to allocate memory it returns null, 
	if (p == NULL) {
		printf("Failed to allocate memory\n");
		return;
	}
	*p = 5;
	*(p+1)=10;
	printf("%d\n", *p);
	printf("%d", *(p+1));
	free(p);
	p = NULL;
	//free(p);
}

void New() {
	//new is superior  to malloc, calloc and realloc, and shall always be used for DMA
	//new not only allocates the memory, it also initialises it. 
	// in case of objects new can also call constructors which malloc calloc cannot.
	// malloc and calloc cannot do this.
	//when new fails to allocate memory, it throws an exception.
	int *p = new int(5); //DMA for a integer with default value as 5
	*p = 6; //value in the memory updated
	std::cout << *p << std::endl;
	delete p;
	p = nullptr;//initialising with nullptr is compulsory, else p will become a dangling pointer
}
void NewArrays() {
	//Allocating memory for arrays through new, with subscript i.e. []
	//Syntax is
	// <type> *<variable name>= new <type>[size];
	// delete []<variable>;
	
	int *p = new int[5];  //memory allocation for array of 5 integers.
	for (int i = 0; i < 5; ++i) {
		p[i] = i;
	}
	
	delete[]p; //delete for arrays operator
}
void Strings() {
	char *p = new char[4];
	strcpy(p,  "C++");
	std::cout << p << std::endl;
	delete[]p;
}
void TwoD() {
	int *p1 = new int[3];
	int *p2 = new int[3];

	int **pData = new int *[2];
	pData[0] = p1;
	pData[1] = p2;

	pData[0][1] = 2;

	delete[]p1;//delete pData[0]
	delete[]p2;

	delete[] pData;
}
int main() {
/*	int data[2][3] = {
		1,2,3,
		4,5,6
	}; //1,2,3,4,5,6
	   //data[0][1]
	Strings();

*/
Malloc();

	return 0;
}
