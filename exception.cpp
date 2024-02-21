#include<iostream>
//Exception:- It is run time
using namespace std;
class A
{
};
double divide(int num ,int den)
{
     A obj;
     if(den==0)
             throw'x';
       return (double)num/den;      
}
int main()
{
    try
    {
        cout<<divide(10,5)<<endl;
    }
    catch(int a)
    { 
        cout<<"int -Denomenator is zero "<<a<<endl;
     }
     catch(char  const *b)
     {
         cout<<"char -Denominator is zero"<<b<<endl;
      }
     catch(double d) 
     {
         cout<<"double -Denominator is zero"<<d<<endl;
       }
      catch(A obj) 
      {
         cout<<"A -Denominator is zero"<<endl;
         }
       catch(...) //ellipse
       {
       cout<<"Universal catch- Denominator is zero"<<endl;
       }
       
      return 0;
    }   
