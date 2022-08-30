#include <iostream>

class SoSimple
{
public:
    static int simObjCnt;

public:
    SoSimple()
    {
        simObjCnt++;
    }
};
int SoSimple::simObjCnt = 0;

int main()
{
    std::cout << SoSimple::simObjCnt << "¹øÂ° SoSimple °´Ã¼" << std::endl;
    SoSimple sim1;
    SoSimple sim2;

    std::cout << SoSimple::simObjCnt << "¹øÂ° SoSimple °´Ã¼" << std::endl;
    std::cout << sim1.simObjCnt << "¹øÂ° SoSimple °´Ã¼" << std::endl;
    std::cout << sim2.simObjCnt << "¹øÂ° SoSimple °´Ã¼" << std::endl;

    return 0;
}