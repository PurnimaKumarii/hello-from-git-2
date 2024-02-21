#include<iostream>
#include<vector>
using namespace std;
class A
{
public:
   class B{
   };
};
   
int main()
{
   A::B obj;
    vector<int> v1;
    //cout<<v1.size()<<" "<<v1.capacity()<<endl;
    v1.push_back(15);
     v1.push_back(35);
      v1.push_back(85);
       v1.push_back(95);
   for(int i=0; i<v1.size(); i++)
   cout<<v1[i]<<" ";
   cout<<endl;
   vector<int>::iterator itr;
   for(itr=v1.begin(); itr!=v1.end(); itr++)
   cout<<*itr <<" ";
   cout<<endl;
   return 0;
   }
