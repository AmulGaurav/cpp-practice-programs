#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void initCounter(void) { counter=0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
for(int i=0; i<2; i++)
{
    cout << "Enter Id of your item no " << counter + 1<< endl;
    cin >> itemId[i];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[i];
    counter++;
    }
}

void Shop ::displayPrice(void)
{ 
    for (int i = 0; i < 2; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
   // dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
