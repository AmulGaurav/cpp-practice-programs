#include <iostream>
using namespace std;

int main() {

int i=1;
int total=0;
int value;

while(i<=10)
{
    cin>>value;
    
    total+=value;
    i++;
}
cout<<total<<endl;
    return 0;
}