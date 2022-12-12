#include <iostream>
using namespace std;

class bank {
    int principal, year;
    float rate, returnVal;
    public:
    bank() {}
    bank(int , int, float);
    bank(int, int, int);
    void show();
};

bank::bank(int p, int y, float r) {
    principal = p;
    year = y;
    rate = r;
    returnVal = principal;
    for(int i=0; i<y; i++) {
    returnVal = returnVal * (1+r);
    }
}

bank::bank(int p, int y, int r) {
    principal = p;
    year = y;
    rate = (float)r/100;
    returnVal = principal;
    for(int i=0; i<y; i++) {
    returnVal = returnVal * (1+rate);
    }
}

void bank::show() {
cout<<principal<<endl<<year<<endl<<rate<<endl<<returnVal<<endl<<endl<<endl;
}

int main() {
bank b1, b2, b3;

int p, y, r;
float R;

cin>>p>>y>>R;
b1 = bank(p, y, R);
b1.show();

cin>>p>>y>>r;
b2 = bank(p, y, r);
b2.show();

b3.show();
    return 0;
}