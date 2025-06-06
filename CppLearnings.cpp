#include <iostream>
// Using the std namespace to save time but really you should be using more specific namespace
using namespace std; 

float sum(float a, float b);

void loops() {

    // while loops
    cout << "WHILE:\n";
    int counter = 1;
    while (counter <= 10) {
        cout << counter << endl;
        counter++;
    }

    // do while loops
    cout << "DO-WHILE:\n";
    int doWhileCounter = 1;

    do {
        cout << doWhileCounter << endl;
        doWhileCounter++;
    } while (doWhileCounter <= 10);

    // for loops
    cout << "FOR-LOOP:\n";
    string animals[5] = { "cat", "dog", "cow", "goat", "bee" };
    for (int i = 0; i < 5; i++) {
        cout << animals[i] << endl;
    }
}

enum EyeColor {Brown, Blue, Green};

void conditionals() {
    bool isTodaySunny = false;
    bool isTodayWeekend = false;

    if (isTodayWeekend && isTodaySunny) {
        cout << "Go to the park" << endl;
    }
    else if (isTodayWeekend && !isTodaySunny) {
        cout << "Go to the park, but take an umbrella" << endl;
    }
    else {
        cout << "Go to work" << endl;
    }

    // Ternary/Conditional operator Shorthand for if/else here
    //isTodaySunny ? cout << "Go to the park" : cout << "Take an umbrella";

    // Switch statements
    EyeColor eyeColor = Blue;

    switch (eyeColor) {
        case Brown: cout << "Brown eyes"; break;
        case Blue: cout << "Blue eyes"; break;
        case Green: cout << "Green eyes"; break;
        default:cout << "Not a valid eye color"; break;
    }
    
}

// Region works like C# 
#pragma region PrimitiveTypes

void types() {

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
}

#pragma endregion

/// <summary>
/// Summary comments work the same as C#
/// main() has to be declared at the end of the file because the C++ compiler
/// works from top to bottom when figuring out functions
/// </summary>
int main()
{
    loops();
    sum(2.2, 5);

    // This command gets rid of the directory and other junk info when running the
    // standard output above.
    system("pause>0");
}

float sum(float a, float b) {
    return a + b;
}