#include<iostream>
using namespace std;
int add(int a, int b)
{
   return a+b;
   }
   int add(int a,int b,int c)
   {
   return a+b+c;
   }
   float add(int a, float b)
   {
   return a+b;
   }
   float add(float a, int b)
   {
   return a+b;
   }
   int main()
   {
   cout<<add(10,30)<<endl;
    cout<<add(10,30,70)<<endl;
     cout<<add(10,30.3f)<<endl;
      cout<<add(10.7f,30)<<endl;
      return 0;
      }
