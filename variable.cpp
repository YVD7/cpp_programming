// c++ program to show difference between
// defination and declaration
// variable

#include <iostream>

int main() {
    // this is declaration of variable a
    int a;

    // this is initialization of a
    a = 10;

    // this is definaction = declaration + initialization
    int b = 20;

    // declaration and defination
    // of variable 'a123'
    char a123 = 'a';

    // This is also both declaration and defination
    // as 'c' is allocated memory and
    // assigned some garbage value
    float c;

    // multiple delcaration and defination
    int _c, _d45, e;

    // let us print the variable
    std::cout << a123 << std::endl;

    return 0;
}