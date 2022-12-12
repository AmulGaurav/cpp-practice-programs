#include <iostream>
using namespace std;

class animal
{
   private:
   int a,b,c;
   public:
   int d,e;
   void setDa(int a1, int b1, int c1);
   void getDa()
   {
       cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
   }
};

void animal :: setDa(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main() {
animal dog;
dog.d=6;
dog.e=7;
dog.setDa(1,2,3);
dog.getDa();
    return 0;
}