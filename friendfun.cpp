#include<iostream>
using namespace std;
class integer{
private:
int a, b;
public:
void setdata(int i, int j)
{
a=i;
b=j;
cout<<"first is"<<a<<"second is"<<b;
}
friend void fun(integer);
};
void fun(integer k)
{
cout<<"in fun"<<k.a+k.b;
}
int main()
{
integer l;
l.setdata(4,6);
fun(l);
return 0;}
// new
#include<iostream>
using namespace std;
class khush
{
int k;
public:
friend int dntno();
};
int dntno()
{
int j=9;
return j;
}
int main()
{
cout<<dntno();
return 0;
}
// one new
#include<iostream>
using namespace std;
class b;
class a
{
private:
int i;
public:
void sit(int k)
{
i=k;
cout<<"in a"<< i;


}
friend void fun(a , b );
};
class b{
int s;
public:
void st(int u)
{
s=u;
cout<<"in b"<<s;

}
friend void fun(a, b);
};
void fun(a l, b m)
{
cout<<"in fun"<<l.i+m.s;

}
int main()
{
a n;
b g;
n.sit(89);
g.st(5);
fun(n, g);
return 0;
}
