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



}
