#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String"<<endl;
    getline(cin,str);
    cout<<"String "<<str<<endl;
  set<int> s1;
  
  s1.insert(100);
   s1.insert(15);
    s1.insert(17);
     s1.insert(86);
      s1.insert(65);
  set<int>::iterator itr;
  for(itr=s1.begin();itr!=s1.end();itr++)
       cout<<*itr<<" ";
    cout<<endl;
    return 0;
    }
