#include<iostream>
using namespace std;
class Rectangle
{
   int len;
   int brd;
   
public:
   void accept();
   void calArea();
  };
   
 void Rectangle::accept()
   {
     cout<<"Enter Length and breadth"<<endl;
     cin>>len>>brd;
    }
 void Rectangle::calArea
  {
  cout<<"Area"<<len*brd<<endl;
  }
  
int main()
{
  Rectangle r1;
  r1.accept();
  r1.calArea();
  return 0;
  }
