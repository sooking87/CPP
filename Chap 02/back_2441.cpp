#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i >= j)
            {
                std::cout << '*';
            }
            else
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}