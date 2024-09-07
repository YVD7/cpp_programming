#include <iostream>

int sum(int x, int y){
    return x+y;
}

int prod(int x, int y){
    return x*y;
}

int subs(int x, int y) {
    return x-y;
}

int divs(int x, int y){
    return x/y;
}

int main() {
    int x, y;
    std::cout << "enter the value of x: "<< std::endl;
    std::cin >> x;
    std::cout << "enter the value of y: "<< std::endl;
    std::cin >> y;

    int sumr = sum(x, y);
    int prodr = prod(x, y);
    int divr = divs(x, y);
    int subr = subs(x, y);

    std::cout << "Sum is: " << sumr << std::endl;
    std::cout << "Product is: " << prodr << std::endl;
    std::cout << "Division is: " << divr << std::endl;
    std::cout << "Substraction is: " << subr << std::endl;

    return 0;

}