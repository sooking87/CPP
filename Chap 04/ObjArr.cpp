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
    Person()
    {
        name = NULL;
        age = 0;
        std::cout << "called Person()" << std::endl;
    }
    void SetPersonInfo(char *myname, int myage)
    {
        name = myname;
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
    Person parr[3];
    char namestr[100];
    char *strptr;
    int age;
    int len;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "�̸�: ";
        std::cin >> namestr;
        std::cout << "����: ";
        std::cin >> age;
        len = strlen(namestr) + 1;
        strptr = new char[len];
        strcpy(strptr, namestr);
        parr[i].SetPersonInfo(strptr, age);
    }

    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
    return 0;
}