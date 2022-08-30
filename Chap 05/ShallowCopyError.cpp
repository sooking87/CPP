#include <iostream>
#include <cstring>

class Person
{
private:
    char *name;
    int age;

public:
    Person(char *myname, int myage)
    {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    void ShowPersonInfo() const
    {
        std::cout << "�̸�: " << name << std::endl;
        std::cout << "����: " << age << std::endl;
    }
    ~Person()
    {
        delete[] name;
        std::cout << "called destructor!" << std::endl;
    }
};

int main()
{
    Person woman1("Sohn soo kyoung", 22);
    Person woman2 = woman1;
    woman1.ShowPersonInfo();
    woman2.ShowPersonInfo();
    return 0;
}