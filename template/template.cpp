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
