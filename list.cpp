#include<iostream>
#include<list>
using namespace std;
int main()
{
  list<int> l1;
  l1.push_back(15);
   l1.push_back(25);
    l1.push_back(65);
     l1.push_back(45);
     
  list<int>::iterator itr;
  for(itr=l1.begin();itr!=l1.end();itr++)
       cout<<*itr<<" ";
    cout<<endl;
    return 0;
    }
