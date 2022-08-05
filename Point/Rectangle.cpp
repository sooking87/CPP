#include <iostream>
#include "Rectangle.h"

bool Rectangle::InitMembers(const Point &ul, const Point &lr)
{
    if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
    {
        std::cout << "�߸��� ��ġ ���� ����" << std::endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}

void Rectangle::ShowRecInfo() const
{
    std::cout << "�� ���: " << '[' << upLeft.GetX() << ", ";
    std::cout << upLeft.GetY() << ']' << std::endl;
    std::cout << "�� �ϴ�: " << '[' << lowRight.GetX() << ", ";
    std::cout << lowRight.GetY() << ']' << std::endl
              << std::endl;
}