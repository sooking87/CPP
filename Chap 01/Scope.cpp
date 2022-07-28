#include <iostream>

int val = 10;

void add()
{
    int val = 20;
    val += 10;  // 지역 변수 20에서 10 증가
    ::val += 5; // 전역 변수 10에서 5 증가
}

int main()
{
    add();
    std::cout << "val: " << val << std::endl;
}