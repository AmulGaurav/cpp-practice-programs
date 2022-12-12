#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int menu;
cin>>menu;

    if(menu>50)
    {
        menu=50;
    }
    
    if((menu<=50)&&(menu>30))
    menu=35;
    
    if((menu<=30)&&(menu>10))
    menu=15;
    
    if((menu<=10)&&(menu>0))
    menu=5;

do
{
switch(menu)
{
    case 50:
    cout<<"You ordered pizza"<<endl;
    break;
    
    case 35:
    cout<<"You ordered burger"<<endl;
    break;
    
    case 15:
    cout<<"You ordered chilli potato"<<endl;
    break;
    
    case 5:
    cout<<"You ordered sandwich"<<endl;
    break;
    
    default:
    cout<<"You have not ordered yet. Please place your oreder"<<endl;
    
}
menu++;
cin>>menu;
}while(menu<=0);
    return 0;
}