#include <iostream>
using namespace std;

/// <summary>
/// This is an elementery intro to pointers. In reality they're used much differently in C++ 
/// to solve many different problems.
/// </summary>
int function()
{
	// This will print the address of the variable n. 
	// In memory it's stored with an address and can be accessed
	// with the '&' sign appended at the front of a variable.
	int n = 5;
	cout << &n << endl;

	// This pointer is the exact same address as above.
	int* ptr = &n;
	cout << ptr << endl;

	// This last line of code will now be the value stored at the 
	// ptr address. You have to append the '*" at the front of the 
	// ptr to get the value.
	cout << *ptr << endl;

	// Now here you can modify the value stored at the ptr address.
	// You'll notice that after doing this the original variable 
	// 'n' now stores the value 10 and has been modified.
	*ptr = 10;
	cout << *ptr << endl;
	cout << n << endl;
	
	// The type of the ptr has to equal the type of the original value
	// float* ptr = &n | THIS WILL NOT WORK

	system("pause>0");
	return 0;
}

void printNumber(int* numberPtr) {
	cout << *numberPtr << endl;
}

void print(void* ptr, char type) {
	switch (type) {
		case 'i':cout << ((int*)ptr) << endl; // handle int*
		case 'c':cout << ((char*)ptr) << endl; // handle char*
	}
}

/// <summary>
/// Void pointers are a special type of pointer that can hold the address of any variable type.
/// Basically like var ptr = some_value; They have a limitation where you can't directly dereference a void pointer.
/// </summary>
int voidPointers() 
{
	int number = 5;
	char letter = 'a';
	print(&number, 'i');
	print(&letter, 'c');
}

void arraysAndPointers() {
	int luckyNumbers[5] = { 2, 3, 5, 7, 9 };
	
	// This will print the address of the first element in the array
	cout << luckyNumbers << endl;
	// This will print the same as above, they're equivalent.
	cout << &luckyNumbers[0] << endl;
	// This actually prints the element value at index 5
	cout << luckyNumbers[2] << endl;
	// Dereference this after incrementing the address by 2. This is equivalent to the above.
	cout << *(luckyNumbers + 2) << endl;


	int num[5];

	for (int i = 0; i <= 4; i++) {
		cout << "Number: ";
		cin >> luckyNumbers[i];
	}
}

/// <summary>
/// Practice returning multiple values with poointers
/// </summary>
void getMinAndMax(int numbers[], int size, int* min, int* max) {
	for (int i = 1; i < size; i++) {
		if (numbers[i] > *max)
			*max = numbers[i];
		if (numbers[i] < *min)
			*min = numbers[i];
	}
}
