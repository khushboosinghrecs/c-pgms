#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    for(char i='a'; i<'e'; i++)
    {
        v.push_back(i);
    }
    cout<<" after insertion"<<endl;
    for(auto i=v.begin(); i!=v.end();i++)
    {
        cout<< *i<<endl;
    }
    cout<<v.front();
    cout<<v.back();
    v.pop_back();
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<endl;
    }
    cout<<v.at(2)<<endl;

}
