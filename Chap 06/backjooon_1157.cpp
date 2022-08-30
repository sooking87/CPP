#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;

    int num[26] = {
        0,
    };

    for (int i = 0; i < str.length(); i++)
    {
        int idx = std::tolower(str[i]) - 'a';
        num[idx]++;
    }

    int maxIdx = 0;
    int isSame = false;
    for (int i = 1; i < 26; i++)
    {
        if (num[maxIdx] == num[i])
        {
            isSame = true;
        }
        if (num[maxIdx] < num[i])
        {
            maxIdx = i;
            isSame = false;
        }
    }

    if (isSame)
    {
        std::cout << "?" << std::endl;
    }
    else
    {
        char ans = maxIdx + 'a' - 32;
        std::cout << ans << std::endl;
    }
}