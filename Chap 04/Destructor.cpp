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
    Person man1("Lee dong woo", 29);
    Person woman1("Sohn soo kyoung", 22);
    man1.ShowPersonInfo();
    woman1.ShowPersonInfo();
    return 0;
}