#include <iostream>
using namespace std;

void dynamicArrays() {
	int myArray[5];

	// This is a dynamic array in C++
	int size = 2;
	int* nums = new int[size];

	// The 'new' keyword here is a way for us to 
	// ask C++ to dynamically allocate memory for us.
	// But there's no garbage collection so we need to deallocate
	// memory manually as well.
	delete[]nums;
	nums = NULL;
}

void multidimensionalArrays() {
	int rows, cols;
	cout << "rows, cols:";
	cin >> rows >> cols;

	// ** means a pointer to a pointer
	// and the new int*[rows]; is instantiating a new array of 
	// integer pointers.
	int** table = new int*[rows];
	
	for (int i = 0; i < rows; i++) {
		table[i] = new int[cols];
	}

	table[1][2] = 88;

	// Need to deallocate memory as well. So at this point
	// you've allocated memory 3 times in the following order:
	// 1. int** table
	// 2. new int*[rows]
	// 3. for loop
	//
	// Now you need to deallocate memory starting from the most granular
	// back up to the most generic. So in reverse order otherwise it's a memory leak?
	// 3. Deallocate for loop or the cols
	for (int i = 0; i < rows; i++) {
		delete[] table[i]
	}

	// 2. Deallocate the table memory or the rows
	delete[] table;
	// 1. Deallocate the pointer reference for the table itself
	table = NULL;
}
