Here are some key features of C++:

Object-Oriented Programming (OOP): C++ supports object-oriented programming, allowing you to organize your code using classes and objects.

Low-level Manipulation: Like C, C++ allows low-level manipulation of data and memory, making it suitable for systems programming.

Standard Template Library (STL): C++ includes the Standard Template Library, a collection of pre-built classes and functions that provide common data structures and algorithms.

Multi-paradigm: C++ supports procedural, object-oriented, and generic programming paradigms, providing flexibility in coding styles.

Compile-time and Run-time Efficiency: C++ is designed to be efficient in terms of both compile-time and run-time performance.


for running the code use
always compile first
-> g++ /filename.cpp
    or
-> g++
-> /a.exe file
exe file is a machine instructions of the source code 

1. #include <> -> preprocessing command
2. using namespace std;  -> is for the output printing i.e "cout"
    if i dont use namespace i'll have to use 
    std::cout<< "";
    everytime i wanna print something
3. cout -> console out/ character output
4. <<endl; -> end the line i.e. next line
5. cin>> "variable" => for taking the inputs /character input
6. int a { 2 } => proper initialization 

7. Arrays

    int myArray[5]; // Declaration
    int anotherArray[] = {1, 2, 3, 4, 5}; // Declaration with initialization

    int size = sizeof(myArray) / sizeof(myArray[0]);

    int element = myArray[2]; // Accessing the third element

    for (int i = 0; i < size; ++i) {
        // Access and manipulate myArray[i]
    }

8. Vectors

#include <vector>

std::vector<int> myVector; // Declaration
std::vector<int> anotherVector = {1, 2, 3, 4, 5}; // Declaration with initialization

int size = myVector.size();

int element = myVector[2]; // Accessing the third element

for (int value : myVector) {
    // Access and manipulate each 'value'
}

myVector.push_back(6); // Add element to the end
myVector.push_back(7); // Add element to the end
myVector.pop_back();   // Remove the last element

9. Typecasting

    int intValue = 5;
    double doubleValue = intValue; // Implicit conversion from int to double

10. Strings

    #include <string>
    std::string myString = "Hello, World!";

    std::string myString = "Hello";
    int length = myString.length(); // or myString.size();

    std::string myString = "Hello, World!";
    std::string substring = myString.substr(7, 5); // Extract "World"

    #include <sstream>

    std::string str = "42";
    int intValue;
    std::stringstream(str) >> intValue; // Convert string to int

11. Pointers

    int* intPointer;   // Pointer to an integer
    double* doublePointer; // Pointer to a double

    int myValue = 42;
    int* pointerToMyValue = &myValue; // Initialization with the address of myValue

    int value = *pointerToMyValue; // Dereferencing the pointer

    int* nullPointer = nullptr; // Null pointer

    int array[] = {1, 2, 3, 4, 5};
    int* arrayPointer = array;

    int thirdElement = *(arrayPointer + 2); // Accessing the third element using pointer arithmetic

11. Objects and Classes

    1) class be created outside the main function
    2) the obj of the class is created  by syntax
        classname objname;
    3) all the attributes or functions of the class are called using obj and the dot operator
        objname.attribute;
        objname.functionname();
    4) access modifiers are public, protected, private
        protected can only be accessed by inherited classes
        Syntax
        public:
            attributes;
                or 
            functions()
    5) this keyword syntax
            this->attribute; 