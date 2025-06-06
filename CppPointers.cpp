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


/// <summary>
/// Void pointers are a special type of pointer that can hold the address of any variable type.
/// Basically like var ptr = some_value; They have a limitation where you can't directly dereference a void pointer.
/// </summary>
int voidPointers() 
{

}
