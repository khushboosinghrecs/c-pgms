#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<string, string> khushi("khushboo", "singh");
    pair<int ,int> k(1,2);
    pair<int, int> j(3,8);
    cout<<"hello this is pair 1 with name"<<khushi.first<<"and title "<<khushi.second<<endl;
    cout<<(k==j);
    cout<<(k!=j);
    cout<<(k>j);
    swap(k,j);
     cout<<"after swaping"<<k.first<<k.second<<endl;
     cout<<j.first<<j.second;
     j.swap(k);
     cout<<k.first;
     cout<<k.second;
    return 0;
}
// new pair
#include<iostream>
#include<tuple>
using namespace std;
int main()
{
tuple<string, int, int> t1;
t1=make_tuple("rahul", 15, 78);
cout<<get<1>(t1)<<" "<<get<2>(t1);
}
