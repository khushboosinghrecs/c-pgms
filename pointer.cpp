#include <iostream>
int incrmnt(int& l)
{
     return l++;
}
int inr(int m)
{
    m++;
}
int main()
{
    int var=8;
    char k='j';
    std::cout<<incrmnt(var)<<std::endl;
    std::cout<<inr(var)<<std::endl;
    char* m=&k;
    int* ptr= &var;
    int** ptr2=&ptr;
    std::cout<<ptr<<"lllllkhushboo"<<*ptr<<"bbbbb"<<&k<<"hhhhh"<<*m<<ptr2<<"!!!!!"<<*ptr2<<std::endl;
    int a=5;
    int r=5;
    int w=6;
    int& kef =r;
    kef=w;
    std::cout<<kef<<r<<std::endl;
    int& ref=a;
    ref=2;
    std::cout<<ref<<"lllll"<<a<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
