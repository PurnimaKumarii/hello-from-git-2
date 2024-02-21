#include<iostream>
using namespace std;
char& fn(char *s)
   {
   return s[0];
   }
   int main()
   {
    char s[]="tcs";
    char ch='T';
    fn(s)=ch;
    cout<<s<<endl;
    return 0;
    }
