#include <iostream>

namespace BestComImp1
{
    void SimpleFunc();
}

namespace BestComImp1
{
    void PrettyFunc();
}

namespace ProgComImp1
{
    void SimpleFunc();
}

int main()
{
    BestComImp1::SimpleFunc();
    ProgComImp1::SimpleFunc();
    return 0;
}

void BestComImp1::SimpleFunc()
{
    std::cout << "BestComImp1's Function" << std::endl;
    PrettyFunc();              //동일 이름 공간
    ProgComImp1::SimpleFunc(); //다른 이름 공간
}
void BestComImp1::PrettyFunc()
{
    std::cout << "So Pretty" << std::endl;
}
void ProgComImp1::SimpleFunc()
{
    std::cout << "ProgComImp1's Function" << std::endl;
}