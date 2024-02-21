#include<iostream>
#include<vector>
using namespace std;
class A
{
public:
   class B
   {
   };
 };
 int main()
 {
   A::B obj;
   vector<int>v1;
   v1.push_back(24);
     v1.push_back(23);
       v1.push_back(54);
         v1.push_back(29);
           v1.push_back(25);
             v1.push_back(94);
               v1.push_back(27);
                 v1.push_back(64);
                   v1.push_back(87);
                     v1.push_back(26);
                     
                      v1.pop_back();
                      v1.pop_back();
                    
  for(int i=0; i<v1.size(); i++)          
  cout<<v1[i]<<" ";
  cout<<endl;
 vector<int>::iterator itr;
 for(itr=v1.begin(); itr!=v1.end(); itr++)
 cout<<*itr<<" ";
 cout<<endl;
 return 0;
 
                     
 }
