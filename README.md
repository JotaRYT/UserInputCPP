# Beginner's Guide to C++: Input/Output

This guide is designed to help beginners how to interact with the user via input/output.

## Interacting with the User

```cpp
#include <iostream>

int main() {
    std::string name;
    int age, phone_number, born_year;

    std::cout << "\nEnter your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "\nEnter your age: ";
    std::cin >> age;

    // ...rest of the input/output code...
}
```

### Key Concepts

- `std::getline(std::cin >> std::ws, name)`: Reads a full line of input
- `std::cin >>`: Reads input directly
- `std::cout`: Outputs text to the terminal

## When to Use C++

- Game development
- System programming
- Resource-intensive applications

## Practice Exercise

1. Create a program that:
   - Declares variables for your name, age, and favorite number
   - Prints them using `std::cout`
   - Adds two numbers and displays the result

Happy coding & Happy new year! 🎄

2 lessons left until you can start program console apps with c++ by yourself.

[Official C++ Documentation](https://en.cppreference.com/w/)
