#include <iostream>
using namespace std;

class shop{

int itemId[50];
int itemPrice[50];
int n;
public:
/*void intit() {
    cout<<counter=1;
}*/
void ini();
void setPrice();
void displayPrice();
    
};

void shop::ini() {
    cin>>n;
}

void shop::setPrice() {
    for(int i=1; i<=n; i++) {
        cout<<"Enter id of item no."<<i;
        cin>>itemId[i];
        cout<<endl;
        cout<<"Enter price of item no. "<<i;
        cin>>itemPrice[i];
        cout<<endl;
        
    }
}

void shop::displayPrice() {
for(int i=1; i<=n; i++) {
    cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main() {
shop shop1;
shop1.ini();
shop1.setPrice();
shop1.displayPrice();
    return 0;
}
