#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int n1=0, n2=1;
int n_term;
if(n==1)
{
    cout<<0;
}
else if(n==2)
{
    cout<<1;
}
else
{
for(int i=3; i<=n; i++)
{
    n_term = n1+n2;
    n1=n2;
    n2=n_term;
}
cout<<n_term<<endl;
}
    return 0;
}