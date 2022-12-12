#include <iostream>
using namespace std;

int main() {
int arr[100];
cout<<sizeof(arr)<<endl;

cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}