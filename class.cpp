#include <iostream>
class complex
{
private:
    int a, b;
public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    void view()
    {
        std::cout<<"x="<<a<<"y="<<b<<std::endl;
        std::cout<<"x="<<a<<"y="<<b<<std::endl;
    }
};
int main()
{
    complex k, l, n;
    k.set(6, 8);
    k.view();
}
// static in class
#include <iostream>
class complex
{
private:
    int a, b;
public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    void view()
    {
        std::cout<<"x="<<a<<"y="<<b<<std::endl;
        std::cout<<"x="<<a<<"y="<<b<<std::endl;
    }
};
int main()
{
    complex k, l, n;
    k.set(6, 8);
    k.view();
}
// other class example
#include<iostream>
#include<string.h>
using namespace std;
class student {
private:
    int rollno;
    char name[20];

    class address {
    private:
        int houseno;
       string street;
       string state;
       string pincode;

    public:
        void setaddress(int h, string s, string c, string n)
        {
            houseno = h;
            street =s;
            state =c;
            pincode=n;
        }

        void showaddress() {
            cout << houseno << endl;
            cout << street << " " << state << endl;
            cout << pincode << endl;
        }
        };
        address add;
    public:
        void setrollno(int k) {
            rollno = k;
        }

        void setname(char *m)
        {
            strcpy(name, m);
        }

        void setaddress(int h, char *s, char *c, char *n) {
            add.setaddress(h, s, c, n);
        }

        void showstudent() {

            cout << rollno;
            cout << name;
            add.showaddress();
        }
};
    int main()
    {
        student s1;
        s1.setname("khushi singh");
        s1.setrollno(100);
        s1.setaddress(400, "pac", "vns", "12456");
        s1.showstudent();
        return 0;
    }
// class
#include <iostream>
#include<list>
#include<utility>
#include<string.h>
#include<stdlib.h>
#include<string>
class maa{
private:
    int age;
    char name[29];
public:
    void setage(int j)
    {
        age=j;

    }
    void setname(char *s)
    {
        strcpy(name, s);
    }
    void showage()
    {
        std::cout<<"age is"<< age<<std::endl;
    }
    void showname()
    {
        std::cout<< name<<std::endl;
    }

};
int main()
{
    maa k1;
    k1.setname("neera");
    k1.setage(37);
    k1.showname();
    k1.showage();

    return 0;
}

//inherintence
using namespace std;
class box
{
public:
int l;
public:
void ne(int k)
{
l=k;
}

};
class bos:public box
{

public:
void setx(int j)
{
ne(j);
}
};
int main()
{
bos a;
a.setx(8);
}
// new classasssssssssssssssss
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int testcase;
    cout<<"enter test case";
    cin >> testcase;
    int point;
    int sizeofstr;

    string strgiven;
    while(testcase--)
    {
    cout<<"enter the sizeofstr point strgiven";
        cin >> sizeofstr >> point;
        cin >> strgiven;
        int max = point;
        int min = point;
        for(int i = 0; i < strgiven.size(); i++)
        {
            if(strgiven[i]=='L')
            {
            cout<<strgiven[i];
                point = point -1;
            }else{
                point = point + 1;
            }

            if(point > max)
            {
                max = point;
            }
            if(point < min)
            {
                min = point;
            }
        }

        cout << (max - (min - 1)) << endl;
    }

    return 0;
}
