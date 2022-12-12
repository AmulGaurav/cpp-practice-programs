#include <iostream>
using namespace std;

int main() {
int n;
int flag;
cin>>n;
for(int i=2; i<n; i++) {
flag=1;
    if(n%i==0) {
        cout<<"Non-prime"<<endl;
        flag=0;
        break;
    }
    
}
if(flag==1) {
        cout<<n;
    }
    return 0;
}