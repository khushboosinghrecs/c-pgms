#include <iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include <climits>
void letscheck();

using namespace std;
int f(int x, int y)
{
    return x>y;
}

void vectordemo()
{
    vector<int> A={11,2, 3, 14};
    cout<<A[1]<<endl;
    sort(A.begin(), A.end()); //nlog(n)
    //2, 3, 11, 14
    //o(log(n)
    bool present=binary_search(A.begin(), A.end(), 3);//true
    cout<<present<<endl;
    present=binary_search(A.begin(), A.end(), 4); //false;
    cout<<present<<endl;
    A.push_back(100);
    present=binary_search(A.begin(), A.end(), 100);//true
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    A.push_back(125);
    //2, 3, 11, 100, ,100, 100, 123
    for(int i=0; i<A.size(); i++)
    {
        cout<<A[i]<<endl;
    }
    vector<int>::iterator it=lower_bound(A.begin(), A.end(), 100);//100
    vector<int>::iterator it2=upper_bound(A.begin(), A.end(), 100);//123
    cout<<*it<<"  *****"<<*it2<<endl;
    cout<<it2-it<<endl;//4
    sort(A.begin(), A.end(), f);//reverse;
    vector<int>::iterator it3;
    for(it3 = A.begin(); it3!=A.end(); it3++)
   {
        cout<<*it3<<" ";
  }
    cout<<endl;
    //now something new


    sort(A.begin(), A.end());
    auto it4=lower_bound(A.begin(), A.end(), 100);
    auto it5=upper_bound(A.begin(), A.end(), 100);
    cout<<*it4<<" "<<*it5<<endl;

    for(int x: A)//for int x in a
    {

        cout<<x<<" ";
    }
    cout<<endl;
    for(int &x: A)//for int x in a
    {

        x++;
    }
    for(int x: A)//for int x in a
    {

        cout<<x<<" ";
    }
}
void setdemo()//logn
{
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(78);
    s.insert(4);
    s.insert(8);
    for(int k: s)
    {
        cout<<k<<"  ";
    }
    auto it1=lower_bound(s.begin(), s.end(), 8);
    auto it2=upper_bound(s.begin(), s.end(), 4);
    cout<<"string "<<*it1;
    cout<<"second iterator"<<*it2<<endl;
    auto it=s.find(-9);
    if(it==s.end())
    {
        cout<<"not present";
    }
    else
    {
        cout<<"present";
        cout<<*it;
    }
    s.erase(4);
    for(int k: s)
    {
        cout<<k<<" ";
    }
    auto it4=s.upper_bound( 4);
    if(it4==s.end())
    {
        cout<<"oops! sorry cant find element\n";
    }
    else
    {
        cout<<*it4<<endl;
    }
}
void mapdemo()//logn
{
    map<int, int> a;
    a[1]=100;
    a[2]=-1;
    a[3]=200;
    a[10000002]=1;
    map<char, int> cnt;
    string x="khushi singh";
    for(char c: x)
    {
        cnt[c]++;
    }
    cout<<cnt['k']<<" "<<cnt['z']<<endl;
}
void powerset1()
{
    //[x,y]
    //add[2,3]
    //add[10,20]
    //add[30,400]
    //give me the interval 13
    set<pair<int, int>> s;
    s.insert({2,4});
    s.insert({10,20});
    s.insert({30,400});
    int point=21;
    auto it=s.upper_bound({point, INT_MAX});
    if(it==s.begin())
    {
        cout<<"the given point is not lying in the interval";

        return;
    }
    it--;
    pair<int, int> current= *it;
    if(current.first<=point && point<=current.second){
        cout<<"yes its present"<<current.first<<"  "<<current.second<<endl;
    }
    else{
        cout<<"the given point is not lying in my interval";
    }
}
int main()
{
    letscheck();
    return 0;
}
