#include <iostream>
using namespace std;

int main()
{
	int num[] = { 1,2,3,4,5 };
	int* ptr_num; //declare ptr_num pointer

	cout << "Displaying the values from the array :";
	for (int x = 0; x < 5; x++)
	{
		cout << " " << num[x];
	}

	ptr_num = num; //move pointer to the start of num[]'s starting memory location

	//Example 1: this is one way to move pointers from one array location to another location by using the ++ postfix.
	cout << endl << "Displaying the values by moving pointer :";
	for (int x = 0; x < 5; x++)
	{
		cout << " " << *ptr_num; //print from current pointer location's deferenced value
		ptr_num++; //move to next pointer location
	}

	ptr_num = num; //move pointer to the start of num[]'s starting memory location again

	//Example 2: this is another way to get values from an array of pointers without actually moving the pointer position
	cout << endl << "Displaying the values by telling pointer position in the array by adding a number :";
	for (int x = 0; x < 5; x++)
	{
		cout << " " << *(ptr_num+x); //pointer + number indicates which position the pointer is in the array
	}
}