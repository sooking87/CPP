#include <iostream>
#include <cmath>

int main()
{
    int start;
    int end;
    int num;
    std::cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        num = sqrt(i);
        // 1이면 소수가 아니고 2, 3은 소수이다.
        if (num == 1 && i != 1)
        {
            std::cout << i << '\n';
            continue;
        }
        else
        {
            for (int j = 2; j <= num; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
                if (j == num)
                {
                    std::cout << i << '\n';
                }
            }
        }
    }
}