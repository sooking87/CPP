#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main()
{
    Point pos1;
    if (!pos1.InitMembers(-2, 4))
        std::cout << "�ʱ�ȭ ����" << std::endl;
    if (!pos1.InitMembers(2, 4))
        std::cout << "�ʱ�ȭ ����" << std::endl;

    Point pos2;
    if (!pos2.InitMembers(5, 9))
        std::cout << "�ʱ�ȭ ����" << std::endl;

    Rectangle rec;
    if (!rec.InitMembers(pos2, pos1))
        std::cout << "���簢�� �ʱ�ȭ ����" << std::endl;

    rec.ShowRecInfo();
    return 0;
}