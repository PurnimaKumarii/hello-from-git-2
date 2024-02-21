#include<iostream>
#include<cstring>
using namespace std;

class MyException
{
   int line;
   char function[50];
   char file[50];
 public:
      MyException();
       MyException(int , const char*, const char*);
       void show();
 
};
MyException::MyException()
{
}
MyException::MyException(int l, const char *fn, const char *f1)
{
   line=l;
   strcpy(function,fn);
   strcpy(file,f1);
   }
   void MyException::show()
   {
     cout<<"Line Number-"<<line<<endl;
     cout<<"Function name-"<<function<<endl;
     cout<<"File name-"<<file<<endl;
   }  
double divide(int num, int den)
{
    if(den==0)
        throw MyException(__LINE__, __FUNCTION__, __FILE__);
      return(double)num/den;
   }
   int main()
   {
   try
   {
      cout<<divide(12,0)<<endl;
     }
     catch(MyException e)
     {
       e.show();
     }
     return 0;
   }  
