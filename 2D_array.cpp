#include <iostream>
using namespace std;

int main() {
int m,n;
cin>>m>>n;
int arr[m][n];
int i,j;

for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
        cin>>arr[i][j];
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

int x;
cin>>x;
for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
        if((arr[i][j]==x))
        {
            cout<<"x exists at "<<i<<j<<endl;
         }
         }
         }
        
       return 0;
}