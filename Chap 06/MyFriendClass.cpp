#include <iostream>
#include <cstring>

class Girl; // Girl이라는 이름이 클래스의 이름임을 알림

class Boy
{
private:
    int height;
    friend class Girl;

public:
    Boy(int len) : height(len)
    {
    }
    void ShowYourFriendInfo(Girl &frn);
};

class Girl
{
private:
    char phNum[20];

public:
    Girl(char *num)
    {
        strcpy(phNum, num);
    }
    void ShowYourFriendInfo(Boy &frn);
    friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
    std::cout << "Her phone number: " << frn.phNum << std::endl;
}

void Girl::ShowYourFriendInfo(Boy &frn)
{
    std::cout << "His height: " << frn.height << std::endl;
}

int main()
{
    Boy boy(170);
    Girl girl("010-3809-7668");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;
}