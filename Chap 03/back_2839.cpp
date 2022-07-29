#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int cnt = 0;

    while (true)
    {
        if (n % 5 == 0)
        {
            cnt += n / 5;
            n = 0;
            break;
        }
        n -= 3;
        cnt++;

        if (n < 0)
            break;
    }

    if (n == 0)
    {
        std::cout << cnt << std::endl;
    }
    else
    {
        std::cout << "-1" << std::endl;
    }
}