#include <iostream>
// Using the std namespace to save time but really you should be using more specific namespace
using namespace std; 

// Function declaration goes before main 
#pragma region FunctionDeclarations
 
void conditionals();

void types();

void loops();

float sum(float a, float b);

template<class T>
//template<typename T> // you can also use the typename instead of class. It's interchangeable 
// seems to just be a style thing.
void Swap(T& a, T& b);

#pragma endregion

#pragma region Enums

enum EyeColor { Brown, Blue, Green };

#pragma endregion

/// <summary>
/// Summary comments work the same as C#
/// main() has to be declared after the function declarations above because the C++ compiler
/// works from top to bottom when figuring out functions. So after function declarations or
/// after the function implementations but putting it after implementations is a chore and doesn't
/// make much sense.
/// </summary>
int main()
{
    //types();
    //conditionals();
    //loops();
    // Double is allowed here instead of float and it's interpreted but this 
    // throws a warning so it's better to be explicit. ints are okay though.
    //cout << sum(2.2, 5) << endl;
    //cout << sum(2.2f, 5) << endl;
    //cout << sum(5.2f, 3) << endl;
    //cout << sum(4, 8) << endl;

    // sizeof() is used for figuring out memory usage. Maybe this gets used a lot in C++?
    //int x = 2;
    //cout << "Size of int is " << sizeof(x) << " bytes\n";

    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a, b);
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;
    Swap<char>(c, d);
    cout << c << " - " << d << endl;

    // This command gets rid of the directory and other junk info when running the
    // standard output above.
    system("pause>0");
}


/// <summary>
/// The & here is the reference to the original values.
/// So if they are modified here their values will change.
/// 
/// Alias:
/// A reference is not a separate variable but another name for an existing one.
/// 
/// Direct Modification :
/// Changes made to a reference parameter inside a function directly affect the original variable passed to the function.
/// 
/// No Copying :
/// Unlike passing by value, passing by reference avoids creating a copy of the argument, which can be more efficient, especially for large objects.
/// Function Parameter References
/// 
/// When a function parameter is declared as a reference using&, it binds to the original argument passed during the function call.
/// 
/// Example: 
/// --------------------------
/// void modifyValue(int& num) {
///     num = 100; // Modifies the original variable
/// }
/// 
/// int main() {
///     int myNum = 10;
///     std::cout << "Before modification: " << myNum << std::endl; // Output: 10
///     modifyValue(myNum);
///     std::cout << "After modification: " << myNum << std::endl; // Output: 100
///     return 0;
/// }
/// --------------------------
/// 
/// Generic example here using the template with typename
/// </summary>
template<class T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

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

float sum(float a, float b) {
    return a + b;
}

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
