#include <iostream>

void SwapByRef(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void SwapByRef2(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main()
{
    int val1 = 10;
    int val2 = 20;
    int val3 = 10;
    int val4 = 20;

    SwapByRef(&val3, &val4);
    std::cout << "val1: " << val3 << std::endl;
    std::cout << "val2: " << val4 << std::endl;

    SwapByRef2(val1, val2);
    std::cout << "val1: " << val1 << std::endl;
    std::cout << "val2: " << val2 << std::endl;

    return 0;
}