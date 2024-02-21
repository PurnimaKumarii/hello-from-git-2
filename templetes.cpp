#include<iostream>
using namespace std;
template<typename T>
void swap(T a, T b)   //funciion with single template argument
{
   T temp;
   temp=a;
   a=b;
   b=temp;
   cout<<a<<" "<<b<<endl;
  }
  template<typename T , typename U >   //function with multiple template arguments
  T add(T a, U b)  //
  {
      return a+b;
  }
  
 int main()
 {
   swap(13,26);
   swap("Purnima","Kumari");
   swap(3.4f,1.1f);
   cout<<add(3.4,7)<<endl;
   return 0;
  } 
