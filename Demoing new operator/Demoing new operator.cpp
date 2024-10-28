// Demoing new operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	while (true)
	{
		int* ptr = new int;  //the worst possible "memory leak" 
		//the "new" operator does 2 things: 
		//1) DYNAMICALLY allocates memory for our program (4 Bytes, in this case) 
		//2) it returns a memory address (which in this case, gets stored in ptr variable) 

		//std::cout << ptr << "\n";

		delete ptr; 

	}
}
