#include<iostream>
using namespace std;


class polygon{
public:
    virtual double calArea()=0;
    virtual double calPeri()=0;
};
class Circle:public polygon
{
  int radius;
 public:
   Circle();
   Circle(int);
   double calArea();
   double calPeri();
   };
 Circle::Circle()
 {
 radius=1;
 }
 Circle::Circle(int r)
 {
 radius=r;
 }
 double Circle::calArea(){
   return 3.14f*radius*radius;
   }
   double Circle::calPeri()
   {
   return 2*3.14f*radius;
   }
 class Rectangle:public polygon
 {
 int len,brd;
 public:
 Rectangle();
 Rectangle(int,int);
 double calArea();
 double calPeri();
 };
 Rectangle::Rectangle()
 {
 len=brd=1;
 }
 Rectangle::Rectangle(int l, int b)
 {
 len=l;
 brd=b;
 }

 double Rectangle::calArea()
 {
 return len*brd;
 }
 double Rectangle::calPeri()
 {
 return 2*(len+brd);
 }
 class Square:public Rectangle
 {
 public:
 Square();
 Square(int);
 double calArea();
 double calPeri();
 };
 
 Square::Square()
 {
 }
 Square::Square(int s):Rectangle(s,s)
 {
 }
 double Square::calArea()
 {
   return Rectangle::calArea();
   }
double Square::calPeri()
{
   return Square::calPeri();
   }
   int main()
   {
   Rectangle r1(2,4);
    polygon *ptr=&r1;
    cout<<ptr->calArea()<<endl;
    cout<<ptr->calPeri()<<endl;
    return 0;
    }
