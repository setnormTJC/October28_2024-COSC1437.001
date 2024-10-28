// October28_2024-COSC1437.001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 

struct Car
{
	int miles; 
	string brandName; 

	void doSomething()
	{
		miles++; 
		cout << "Drove one mile - new miles is: " << miles << "\n";
	}
};

int main()
{
	//int a = 13; //"simple" -> not "complex" 
	//cout << a / 2 << "\n"; //INTEGER division is defined for INTEGERS (it is NOT floating point division in C/C++) 

	//Car myCar; //this is a "complex" (user-defined) data type 
	//myCar.miles = "314125hfglkjafdfgsfdg"
	//myCar.doSomething(); 

	//cout << myCar 
	//int someInteger = 2; 
	//int* aPointerToAnIntegerVariable; //how to initialize this thing? 
	//
	//aPointerToAnIntegerVariable = &someInteger; //legal value!

	//cout << "&someInteger is: " << &someInteger << "\n";
	//cout << "The value of the pointer variable is: " << aPointerToAnIntegerVariable << "\n";



	//aPointerToAnIntegerVariable = 2; //the second address in memory? 0x2

	//int someArray[100]; 

	////INT_MAX
	//int a = 65'535; //2 ^ 8 = 256, (2^16) - 1 = ?  
	//cout << "Variable a in hexadecimal: "
	//	<< std::showbase << std::hex
	//	<< a << "\n";


	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << &someArray[i] << "\n"; //how many BYTES are allocated for an integer data type? 
	//}

	//int a = 123; 
	//int* ptrToA = &a; 

	////cout << ptrToA << "\n";

	//*ptrToA = 1234567; 

	//cout << "WAS the value of 'a' updated? " << a << "\n";
	//cout << *ptrToA << "\n";


	//int bigBoy[10000000000000000000000000000];

	
	//int cStyleStaticArray[5] = { 11, 22, 33, 44, 55 };


	//int* ptr = cStyleStaticArray; 
	//ptr++; 
	//ptr++; 

	//cout << "Is it 22? " << *ptr << "\n";


	//brief demo of "pointer arithmetic" 
	//cStyleStaticArray++; 

	//cout << cStyleStaticArray << "\n";

	//new 
}

