#include <iostream>

int main()
{
    int a;
    int b;
    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << '>' << std::endl;
    }
    else if (a < b)
    {
        std::cout << '<' << std::endl;
    }
    else
    {
        std::cout << "==" << std::endl;
    }
}