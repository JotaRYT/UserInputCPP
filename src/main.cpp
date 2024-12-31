#include <iostream>

// cout is an object of class ostream and it's called an insertion operator.
// cin is an object of class istream and it's called an extraction operator.

// So you can develop a terminal program and overload the insertion and extraction operators.
//  For example asking the user information, age, name, etc.

int main() {
    // Variables
    std::string name;
    int age;
    int phone_number;
    int born_year;

    // Ask the user for information
    std::cout << "\nEnter your name: ";
    std::getline(std::cin >> std::ws, name);   
    // getline is used to get a line of text from the user(Useful when you want to get a string with spaces)

    std::cout << "\nEnter your age: ";
    std::cin >> age;
    std::cout << "\nEnter your phone number: ";
    std::cin >> phone_number;
    std::cout << "\nEnter the year you were born: ";
    std::cin >> born_year;

    // Show the information
    std::cout << "\n\nYour name is: " << name << ", you are " << age 
    << " years old" << ", your phone number is " << phone_number 
    << " and you were born in: " << born_year << std::endl;

    return 0;
}