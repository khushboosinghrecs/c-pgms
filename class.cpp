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
