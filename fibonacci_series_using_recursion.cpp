#include <iostream>
using namespace std;

int factorial(int n)
{
if(n==1)
{
    return 0;
}
if(n==2)
{
    return 1;
}
    return factorial(n-2)+factorial(n-1);
}

int main() {
int i;
cin>>i;
cout<<factorial(i);
    return 0;
}