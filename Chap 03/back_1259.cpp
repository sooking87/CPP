#include <iostream>
#include <string>

std::string num;

int main()
{
    while (true)
    {
        int isSame = true;
        getline(std::cin, num);
        if (num == "0")
        {
            break;
        }

        for (int i = 0; i < num.length() / 2; i++)
        {
            if (num[i] != num[num.length() - i - 1])
            {
                isSame = false;
            }
        }
        if (isSame)
        {
            std::cout << "yes" << std::endl;
        }
        else
        {
            std::cout << "no" << std::endl;
        }
    }
}