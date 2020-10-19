#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "  "
             << "*"
             << "  " << '\n';
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "**";
        cout << " ";
        cout << "**" << '\n';
    }
    return 0;
}
