#include <iostream>
using namespace std;

class Y;

class X {
    int val1;
    friend void swap(X &, Y &);
    public:
    void setData(int v1) {
        val1 = v1;
    }
    void dispData() {
        cout<<val1;
    }
};

class Y {
    int val2;
    friend void swap(X &, Y &);
    public:
    void setData(int v2) {
        val2 = v2;
    }
    void dispData() {
        cout<<val2<<endl<<endl;
    }
};

void swap(X &a, Y &b) {
    int temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}

int main() {
X x;
x.setData(3);
x.dispData();

Y y;
y.setData(5);
y.dispData();

swap(x, y);
x.dispData();
y.dispData();

    return 0;
}