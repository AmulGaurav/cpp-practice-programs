#include <iostream>
using namespace std;

int& swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return b;
}

int main() {
int x=6, y=7;
swap(x,y)=500;
cout<<x<<" "<<y<<endl;
    return 0;
}