#include <iostream>
#include <cstring>

class PermanentWorker
{
private:
    char name[100];
    int salary;

public:
    PermanentWorker(char *name, int money) : salary(money)
    {
        strcpy(this->name, name);
    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        std::cout << "name: " << name << std::endl;
        std::cout << "salary: " << salary << std::endl
                  << std::endl;
    }
};

class EmployeeHandler
{
private:
    PermanentWorker *empList[50];
    int empNum;

public:
    EmployeeHandler() : empNum(0)
    {
    }
    void AddEmployee(PermanentWorker *emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        for (int i = 0; i < empNum; i++)
        {
            empList[i]->ShowSalaryInfo();
        }
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        for (int i = 0; i < empNum; i++)
        {
            sum += empList[i]->GetPay();
        }
        std::cout << "salary sum: " << sum << std::endl;
    }
    ~EmployeeHandler()
    {
        for (int i = 0; i < empNum; i++)
        {
            delete empList[i];
        }
    }
};

int main()
{
    // ���� ������ �������� ����� ��Ʈ�� Ŭ������ ��ü ����
    EmployeeHandler handler;

    // ���� ���
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));

    // �̹� �޿� �����ؾ� �� �޿��� ����
    handler.ShowAllSalaryInfo();

    // �̹� �޿� �����ؾ� �� �޿��� ����
    handler.ShowTotalSalary();
    return 0;
}