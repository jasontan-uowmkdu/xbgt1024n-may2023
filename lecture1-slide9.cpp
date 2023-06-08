#include <iostream>
using namespace std;

void func_Arrays(int xArr[], int array_size) //array parameters are declared as how you would declare an array
{
	for (int i = 0;i < array_size;i++)
	{
		xArr[i] = xArr[i]+ 10;
	}

	//no return value is needed for an array value modification 
	//all arrays are passed by reference
}

int main()
{ 
	int xArray[] = {28, 71, 53, 86, 22};
	int size = end(xArray) - begin(xArray);

	func_Arrays(xArray,size); //arrays are passed by reference

	for (int i = 0; i < size; i++)
	{
		cout << xArray[i] << endl;
	}
}