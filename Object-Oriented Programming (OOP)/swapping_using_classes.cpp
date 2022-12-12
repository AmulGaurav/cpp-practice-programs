#include <iostream>
using namespace std;

class Y;

class X {
    int num1;
    friend void swap(X , Y);
    public:
    X(int v1) {
        num1 = v1;
    }
    void printnum1() {
        cout<<num1;
    }
};

class Y {
    int num2;
    friend void swap(X, Y);
    public:
    Y(int v2) {
        num2 = v2;
    }
    void printnum2() {
        cout<<num2<<endl;
    }
};

void swap(X x, Y y) {
    int temp = x.num1;
    x.num1 = y.num2;
    y.num2 = temp;
    cout<<x.num1<<y.num2;
}

int main() {

X x(3);

Y y(2);

x.printnum1();
y.printnum2();

swap(x, y);

    return 0;
}