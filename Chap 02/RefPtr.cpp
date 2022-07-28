#include <iostream>

int main()
{
    int num = 12;
    int *ptr = &num;   // num의 주소값을 ptr에 저장
    int **dptr = &ptr; // ptr의 주소값을 dptr에 저장

    std::cout << num << std::endl;
    std::cout << ptr << *ptr << std::endl;
    std::cout << dptr << std::endl;

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    std::cout << ref << std::endl;
    std::cout << *pref << std::endl;
    std::cout << **dpref << std::endl;
    return 0;
}