#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    public:
    void setdata() {
        cin>>id;
    }
    void getdata() {
        cout<<"The id of employee number "<<count<<"is "<<id<<endl;
    }
    static void getcount(void) {
        cout<<"The Employee count is "<<count<<endl;
        count++;
    }
};

int Employee::count=1;

int main() {
Employee harry, rohan, lovish;

harry.setdata();
harry.getdata();
Employee::getcount();

rohan.setdata();
rohan.getdata();
Employee::getcount();

lovish.setdata();
lovish.getdata();
Employee::getcount();

    return 0;
}