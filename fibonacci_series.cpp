#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int n1=0, n2=1;
    int sum=0;
    for(int i=1; i<=n; i++) {
        cout<<n1<<endl;
        sum=n1+n2;
        n1=n2;
        n2=sum;
    }  
    return 0;
}