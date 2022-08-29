#include <iostream>
#include <cstring>

class SoSimple
{
private:
    int num;

public:
    SoSimple(int n) : num(n)
    {
        std::cout << "num = " << num << ", ";
        std::cout << "address = " << this << std::endl;
    }
    void ShowSimpleData()
    {
        std::cout << num << std::endl;
    }
    SoSimple *GetThisPointer()
    {
        return this;
    }
};

int main()
{
    SoSimple sim1(100);
    SoSimple *ptr1 = sim1.GetThisPointer();
    std::cout << ptr1 << ", ";
    ptr1->ShowSimpleData();
}