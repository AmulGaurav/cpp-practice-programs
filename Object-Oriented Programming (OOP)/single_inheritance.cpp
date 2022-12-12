#include <iostream>
using namespace std;

class Base {
    int data1;
    friend class Derived;
    public:
    int data2;
    void setData() {
        data1 = 5;
        data2 = 3;
    }
    int getData1() {
        return data1;
    }
    int getData2() {
        return data2;
    }
};

class Derived : private Base {
    int data3;
    public:
    void process() {
    setData();
        data3 = data2 * data1;
    }
    void display() {
        cout<<data1<<endl<<data2<<endl<<data3<<endl;
    }
};

int main() {

Derived der;
//der.setData();
der.process();
der.display();
    return 0;
}