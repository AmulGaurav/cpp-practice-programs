#include <iostream>
using namespace std;

struct employee 
{
    int eId;
    float salary;
    char favChar;
};

typedef struct personal
{
    int age;
    float money;
    char car;
    }po;

union money
{
    int coin;
    char bike;
    float digital;
};

int main() {

struct employee rohan;
struct employee harry;
struct employee gaurav;
rohan.eId=2;
rohan.salary=8282.28;
rohan.favChar='r';

cout<<rohan.eId<<endl<<rohan.salary<<endl<<rohan.favChar<<endl<<endl<<endl;


po amul;
amul.age=18;
amul.money=100;
amul.car='0';

cout<<amul.age<<endl<<amul.money<<endl<<amul.car<<endl<<endl<<endl;


union money m1;
m1.coin=20;
cout<<m1.coin<<endl<<endl<<endl;


enum age{infant, teen,  adult, old};
age shubham=infant, amit=teen, aman=adult, anuj=old;

cout<<shubham<<endl<<amit<<endl<<aman<<endl<<anuj;
    return 0;
}