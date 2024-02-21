#include<iostream>
#include<cstring>
using namespace std;
class Laptop
{
int id;
char *make;
double cost;

public:
    Laptop();
    Laptop(int, char*, double);
    void show();
    ~Laptop();
    };
 Laptop::~Laptop()
 {
 delete[]make;
 }
 Laptop::Laptop()
 {
   id=101;
   make=new char[3];
   strcpy(make,"hp");
   cost=40000;
   }
 Laptop::Laptop(int id,char *m,double c)
 {
  this->id=id;
  make=new char[strlen(m)+1];
  strcpy(make,m);
  cost=c;
  }
  void Laptop::show()
  {
   cout<<id<<endl;
   cout<<make<<endl;
   cout<<cost<<endl;
   }
   int main()
   {
   Laptop l1;
   Laptop l2(102,"lenovo",35000);
   l1.show();
   cout<<endl;
   l2.show();
   return 0;
   }
