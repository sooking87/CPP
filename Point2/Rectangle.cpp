#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2) : upLeft(x1, y1), lowRight(x2, y2)

{
    // empty
}

void Rectangle::ShowRectInfo() const
{
    std::cout << "�� ���: " << '[' << upLeft.GetX() << ", ";
    std::cout << upLeft.GetY() << ']' << std::endl;
    std::cout << "�� �ϴ�: " << '[' << lowRight.GetX() << ", ";
    std::cout << lowRight.GetY() << ']' << std::endl
              << std::endl;
}