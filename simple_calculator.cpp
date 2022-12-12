#include <iostream>
using namespace std;

int main() {

    int num1 , num2;
    cin>>num1>>num2;  // Enter two numbers as operands
    
    char opr;
    cin>>opr;         // Enter the Arithmetic symbol in which you want to operate
    
    switch(opr) {
        case '+':
        cout<<num1+num2;
        break;
    
        case '-':
        cout<<num1-num2;
        break;
    
        case '*':
        cout<<num1*num2;
        break;
    
        case '%': {
            if(num2!=0)
            cout<<num1%num2;
    
            else
            cout<<"cannot divide by 0";
        break;
        }
     
        case '/': {
            if(num2!=0)
            cout<<num1/num2;
    
            else
            cout<<"cannot divide by 0";
        break;
        }
    
        default:
        cout<<"Invalid Operation"<<endl<<"Error";
        break;

    }
    return 0;
}