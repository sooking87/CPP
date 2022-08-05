#include <iostream>

class SinivelCap
{
public:
    void Take() const { std::cout << "Äà¹°ÀÌ ½Ï ³³´Ï´Ù. " << std::endl; }
};

class SneezeCap
{
public:
    void Take() const
    {
        std::cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù. " << std::endl;
    }
};

class SnuffleCap
{
public:
    void Take() const
    {
        std::cout << "ÄÚ°¡ »½ ¶Õ¸³´Ï´Ù. " << std::endl;
    }
};

class ColdPatient
{
public:
    void TakeSinivelCap(const SinivelCap &cap) const { cap.Take(); }
    void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
    void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
};

int main()
{
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient sufferer;
    sufferer.TakeSinivelCap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnuffleCap(ncap);
    return 0;
}