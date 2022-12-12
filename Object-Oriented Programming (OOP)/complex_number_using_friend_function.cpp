#include <iostream>
using namespace std;

class complex;

class calculator {
    public:
    int add(int v1, int v2) {
        return v1+v2;
    }
    int sumReal(complex, complex);
    int sumComp(complex, complex);
};

class complex {
    int a, b;
    friend int calculator::sumReal(complex, complex);
    friend int calculator::sumComp(complex, complex);
    public:
    void setNumber(int v1, int v2) {
        a = v1;
        b = v2;
    }
    void printNumber() {
        cout<<a<<" + i"<<b<<endl;
    }
};

int calculator::sumReal(complex o1, complex o2) {
    return o1.a+o2.a;
}

int calculator::sumComp(complex o1, complex o2) {
    return o1.b+o2.b;
}


int main() {

complex c1, c2;
c1.setNumber(1,3);
c2.setNumber(2,4);

calculator calc;
cout<<calc.sumReal(c1, c2);
cout<<endl;
cout<<calc.sumComp(c1, c2);

    return 0;
}