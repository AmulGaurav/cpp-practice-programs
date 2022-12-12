#include <iostream>
using namespace std;

class Employee {
    int age;
    public:
    int id;
    int salary;
    Employee(int inp) {
        id = inp;
    } 
    Employee() { }
    void getId() {
        cout<<id<<endl;
    }
};

class Programmer : public Employee {
    public:
    int language;
    Programmer(int inp) {
        id = inp;
    }
    
};

int main() {
Programmer Harry(6);
//Harry.id = 5;
cout<<Harry.id<<endl;
    return 0;
}