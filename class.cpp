#include <iostream>
class complex
{
private:
    int a, b;
public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    void view()
    {
        std::cout<<"x="<<a<<"y="<<b<<std::endl;
        std::cout<<"x="<<a<<"y="<<b<<std::endl;
    }
};
int main()
{
    complex k, l, n;
    k.set(6, 8);
    k.view();
}
// static in class
#include <iostream>
class complex
{
private:
    int a, b;
public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    void view()
    {
        std::cout<<"x="<<a<<"y="<<b<<std::endl;
        std::cout<<"x="<<a<<"y="<<b<<std::endl;
    }
};
int main()
{
    complex k, l, n;
    k.set(6, 8);
    k.view();
}
