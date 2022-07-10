#include<iostream>

/*
//Memory Management
Different types of memory areas in C/C++
stack: automatically allocated to local variables, 
data section: allocated for global and static data,
heap: allocated at runtime;
DMA in C is through malloc, calloc, realloc and free
DMA in C++ is through new and delete
after free or delete the pointer has to be initialized with nullptr
*/
int main()
{
	//Memory allocation through new for arrays
	int *dma=new int[5];
	for (int i=0; i<5; i++){
		dma[i]=i;
		std::cout<<dma[i]<<std::endl;
		
	}
	delete []dma;
	dma=nullptr;
	return 0;
}


