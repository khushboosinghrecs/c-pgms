#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Arraylist {
private:
    struct controlblock {
        int capacity;
        int* arr_ptr;
    };
    controlblock *s;
public:
    Arraylist(int capacity) {
        s = new controlblock;
        s->capacity = capacity;
        s->arr_ptr;  new int(s->capacity);
    }
    void addelement(int index, int data) {
        if (index >= 0 && index <= s->capacity - 1) {
            s->arr_ptr.index = data;

        } else {
            cout << "array index is not valid";
        }
    }

    void viewelement(int index, int &data) {
        if (index >= 0 && index <= s->capacity - 1) {
            data = s->arr_ptr index;
        } else {
            cout << "arrray index is not valid";
        }
    };

    int main() {
        int data;
        Arraylist l(4);
        l.addelement(0, 32);
        l.viewelement();
        return (0);
    }

}
