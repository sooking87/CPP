#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    int cnt = 0;

    for (int i = 1; i < n + 1; i++)
    {
        cnt += std::to_string(i).length();
    }
    std::cout << cnt << std::endl;
}