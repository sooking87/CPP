#include <iostream>

bool IsPos(int num)
{
    if (num <= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    bool isPos;
    int num;
    std::cout << "Input number: ";
    std::cin >> num;

    isPos = IsPos(num);
    if (isPos)
    {
        std::cout << "Positive number" << std::endl;
    }
    else
    {
        std::cout << "Negative number" << std::endl;
    }
    return 0;
}