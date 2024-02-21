#include<iostream>
using namespace std;
class Rectangle
{
  int len;
  int brd;
public:
   Rectangle();
   Rectangle(int,int);
   void accept();
   void calcArea();
   void show();
   int getlen();
   void setlen(int);
 };
 int Rectangle::getlen()
 {
   return len;
   }
 void Rectangle::setlen(int l)
 {
   len=l;
   }
 Rectangle::Rectangle()
 {
    len=1;
    brd=1;
    }
    Rectangle::Rectangle(int l, int b)
    {
    len=l;
    brd=b;
    }
  void Rectangle::accept()
  {
    cout<<"ENter len and brd:"<<endl;
    cin>>len>>brd;
    }
    
  void Rectangle::calcArea()
  {
   cout<<"Area"<<len*brd<<endl;
   }
   void Rectangle::show()
   {
   cout<<"length"<<len<<",breadth"<<brd<<endl;
   }
   int main()
   {
    Rectangle r1,r2(42,43),r3,r4;
  // r2.calcArea();
  cout<<r2.getlen()<<endl;
    r2.show();
    r2.setlen(100);
    r2.show();//100,20
    return 0;
    }
