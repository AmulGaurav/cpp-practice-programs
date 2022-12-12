#include <iostream>
using namespace std;

class Complex {
    int a, b;
    friend Complex sumData(Complex p1, Complex p2);
    public:
    void setData(int v1, int v2) {
        a = v1;
        b = v2;
    }
    void getData() {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex sumData(Complex p1, Complex p2) {
    Complex p3;
    p3.setData(p1.a + p2.a, p1.b + p2.b);
    return p3;
}

int main() {

Complex c1, c2, c3;

c1.setData(1,3);
c2.setData(2,4);

c1.getData();
c2.getData();

c3 = sumData(c1,c2);
c3.getData();

    return 0;
}