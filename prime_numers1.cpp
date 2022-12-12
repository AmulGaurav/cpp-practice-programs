#include <iostream>
using namespace std;

int main() {
int prime=1;
int num;
int p_num=2;
int i=2;

cin>>num;

for(p_num=2; p_num<=num; p_num++)
{
    prime=1;
    for(i=2; i<p_num; i++)
    { 
        if(p_num%i==0)
        prime=0;
    }
    if(prime==1)
    cout<<p_num<<endl;
    
}
    return 0;
}