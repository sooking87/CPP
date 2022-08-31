#include <iostream>

int main()
{
    int n;
    int cnt = 0;

    std::cin >> n;

    if (n < 100)
    {
        cnt += n;
    }
    else
    {
        cnt += 99;
        for (int i = 100; i <= n; i++)
        {
            int a = i / 100;
            int b = i / 10 % 10;
            int c = i % 10;
            if ((b - a) == (c - b))
            {
                cnt++;
            }
        }
    }
    std::cout << cnt << std::endl;
}