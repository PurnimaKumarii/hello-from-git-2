#include<iostream>
using namespace std;
 void Areacircum(int radius, float &parea, float &pperi)
 { 
 *parea=3.142*radius*radius;
  *pperi=2*3.142*radius;
  }
  void AreaRect(int len,int brd, float &parea, float &pperi)
 { 
 *parea=len*brd;
  *pperi=2*(l+b);
  }
  int main()
  {
   int choice,radius,len,brd;
   flaot area,peri;
   cout<<"Enter your choice"<<endl;
   cout<<"1.Circle\n 2.Rectangle"<<endl;
   cin>>"";
   switch(choice)
   {
     case 1:
       cout<<"Enter radius"<<endl;
       cin>>radius<<endl;
       AreaCircum(radius,&area,&peri);
       cout<<"Area of circle %f and circumference of circle is %f\n,area,peri"<<endl;
       break;
     case 2:
  cout<<"Enter length and breadth"<<endl;
       cin>>len<<endl;
       cin>brd<<endl;
       AreaRect(len,brd,&area,&peri);
       cout<<"Area of Rectangle %f and perimeter of Rectangle is %f\n,area,peri"<<endl;
       break;
       default:
          cout<<"Invalid choice"<<endl;
      }    
      return 0;
      }
