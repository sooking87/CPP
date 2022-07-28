#include <iostream>

int main()
{
    int num1 = 2010;
    int &num2 = num1;

    num2 = 3047;
    std::cout << "VAL: " << num1 << std::endl;
    std::cout << "REF: " << num2 << std::endl;

    std::cout << "VAL: " << &num1 << std::endl;
    std::cout << "REF: " << &num2 << std::endl;

    return 0;
}