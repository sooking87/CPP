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
    Person(const Person &copy) : age(copy.age)
    {
        name = new char[strlen(copy.name) + 1];
        strcpy(name, copy.name);
    }
    void ShowPersonInfo() const
    {
        std::cout << "이름: " << name << std::endl;
        std::cout << "나이: " << age << std::endl;
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