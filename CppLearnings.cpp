#include <iostream>
// Using the std namespace to save time but really you should be using more specific namespace
using namespace std; 

int main()
{
// Region works like C# 
#pragma region PrimitiveTypes

    // Constants similar to c#
    const int constantAge = 25;
    int age = 25;
    age = 26;
    
    // Float for storing decimals
    float weight = 65.5;

    // Double can represent decimal numbers to a higher
    // precision than float. It's double the capacity as float.
    double weightDouble = 65.5;

    // Double quotes don't work for char
    char gender = 'f';

    string username = "CodeBeauty";

    bool isTodaySunny = false;

    // Arrays
    string colors[] = { "red", "green", "pink", "blue", "black" }; 
    // Arrays with fixed size
    string colors2[10] = {};

    // Print single element from the array
    cout << colors[0];
    // Accept input from console and store in position 0 of colors array
    cin >> colors[0];
    cout << colors[0];
    colors[1] = "gray";

#pragma endregion

    // This command gets rid of the directory and other junk info when running the
    // standard output above.
    system("pause>0");
}
