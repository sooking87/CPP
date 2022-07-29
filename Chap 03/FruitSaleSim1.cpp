#include <iostream>

class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    int SaleApples(int money)
    {
        int num = money / APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }
    void ShowSalesResult()
    {
        std::cout << "���� ���: " << numOfApples << std::endl;
        std::cout << "�Ǹ� ����: " << myMoney << std::endl
                  << std::endl;
    }
};

class FruitBuyer
{
    int myMoney;
    int numOfApples;

public:
    void InitMembers(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }
    void BuyApples(FruitSeller &seller, int money)
    {
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }
    void ShowBuyResult()
    {
        std::cout << "���� �ܾ�: " << myMoney << std::endl;
        std::cout << "��� ����: " << numOfApples << std::endl
                  << std::endl;
    }
};

int main()
{
    FruitSeller seller;
    seller.InitMembers(100, 20, 0);
    FruitBuyer buyer;
    buyer.InitMembers(50000);
    buyer.BuyApples(seller, 2000);

    std::cout << "���� �Ǹ����� ��Ȳ" << std::endl;
    seller.ShowSalesResult();
    std::cout << "���� �������� ��Ȳ" << std::endl;
    buyer.ShowBuyResult();
    return 0;
}