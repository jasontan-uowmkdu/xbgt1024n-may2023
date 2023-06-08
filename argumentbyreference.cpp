#include <iostream>
using namespace std;

/*
Arguments can be passed by 2 methods:
1) by value creates a copy of the data that exists only within the function. Any changes to the data in the function doesn't affect the main variable
2) by raference points to the original memory location of the variable in the main. Any changes made by the function also changes the main
*/ 

void testargument(int a, int& b) //notice that argument for a is passed by value, for b is passed by reference (&)
{
	a = 30;
	b = 50;
}

int main()
{
	int num1 = 5, num2 = 10;

	testargument(num1, num2);

	cout << "The value of num1 is " << num1 << endl; //notice the change in the function didn't affect num1
	cout << "The value of num2 is " << num2 << endl; //notice the change in the function affected num2


}