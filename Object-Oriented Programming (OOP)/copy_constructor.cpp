#include <iostream>
using namespace std;

class Number {
    int a;
    public:
    Number() {}
    Number(int v1) {
        a = v1;
    }
   /*Number(Number &obj) {
        cout<<"Copy constructor"<<endl;
        a = obj.a;
    }*/
    void display() {
        cout<<a<<endl<<endl;
    }
};

int main() {

Number n1, n2(5), n3;
n1.display();
n2.display();

n3 = n2;
n3.display();

Number n4(n2);
n4.display();
    return 0;
}