#include "iter.hpp"
#include <iostream>

int main (void) {
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'a', 'b', 'c', 'd'};
	float floatArray[] = {1.234f, -4.23456f, 5.345566f};
	std::string strArray[] = {"hello", "hi", "hey"};

	iter(intArray, 5, printFactorial);
	std::cout << std::endl;
	iter(charArray, 4, printUpper);
	std::cout << std::endl;	
	iter(floatArray, 3, printPrecision);
	std::cout << std::endl;
	iter(strArray, 3, helloWorld);
	std::cout << std::endl;

}