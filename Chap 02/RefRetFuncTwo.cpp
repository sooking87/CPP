#include <iostream>

int RefRetFuncTwo(int &ref)
{
    ref++;
    return ref;
}

int main()
{
    int num1 = 1;
    int num2 = RefRetFuncTwo(num1);

    num1 += 1;
    num2 += 100;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
}