#include <cmath>
#include <cstdio>
#include <cstring>

int main()
{
    char str1[] = "Result";
    char str2[30];

    std::strcpy(str2, str1);
    std::printf("%s: %f\n", str1, std::sin(0.14));
    std::printf("%s: %f \n", str2, std::abs(-1.25));
    return 0;
}