#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void finddemo()
{
    vector<int> v;
    vector<int> ::iterator it;
    cout<<"enter the num of elements for vector";
    int num;
    cin>>num;
    v.resize(num);
    for(int x: v)
    {
        cin>>x;
    }
    int ser=34;
   it= find(v.begin(), v.end(), ser);
   if(it!=v.end())
   {
       cout << "element is found " << ser << " at position :";
       cout << it - v.begin() + 1;
   }
   else
   {
       cout<<"element not found in vector";
   }
    return 0;

}
// sorting
#include<iostream>
#include<algorithm>
using namespace std;


void sort(int s[])
{
    for(int i=0; i<sizeof(s)-1; i++)
    {

    cout<<s[i];
    }
}
int main()
{
int a[5]={23,7,8,9,34};

short(a,a+4);
sort(a);
return 0;
}
