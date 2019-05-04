#include <iostream>
#include <algorithm>
using namespace std;
template <typename s>
s khush(s a, s b)
{
    return a*b;

};
int khushi(int a, int b)
{
    return a+b;
}

int main() {
    cout<<khush<int>(8,9)<<endl;
  cout<<khushi(2,7)<<endl;
    return 0;
}
// new template
#include<iostream>
using namespace std;
template<function X>
X big(X a, X b)
{
    if(a>b)
    {
       return a;
    }
    else
    {
       return b;
    }

}
int main(void)
{
    cout<<big (7,5)<< endl;
    cout<<big(8.9,9.0);
    return 0;
}
