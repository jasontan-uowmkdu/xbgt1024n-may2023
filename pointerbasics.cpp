#include <iostream>
using namespace std;

/*
Pointers do not hold value but rather holds memory positions
Dereferenced pointers (using *) is used to point to the actual value located in the memory position
*/
int main()
{
	int num1 = 85, num2 = 65; //this is how you declare variables

	int* ptr1; //this is how you declare a pointer
	ptr1 = &num1; //this is how you pass the memory position of num1 to a pointer
	cout << "The value that the pointer *ptr1 is pointing to " << *ptr1 << endl; //*pointer is used to "dereference" the memory position and get the actual data in that memory

	ptr1 = &num2; //this is how you change the pointer to point to new memory location (num2)
	cout << "The new value that the pointer *ptr1 is pointing to " << *ptr1 << endl;
}