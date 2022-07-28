#include <iostream>

namespace Hybrid
{
    void HybFunc()
    {
        std::cout << "So simple function!" << std::endl;
        std::cout << "In namespace Hybrid!" << std::endl;
    }
}

namespace Hybrid
{
    void TempFunc()
    {
        std::cout << "Another Hybrid's Function" << std::endl;
    }
}

int main()
{
    using namespace Hybrid;
    HybFunc();
    TempFunc();
    return 0;
}