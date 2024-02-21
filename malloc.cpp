#include<iostream>
using namespace std;
int main()
{
  int i;
  int *p=new int[5];
  
  cout<<"ENter the five integer"<<endl;
  for(i=0; i<5; i++)
  
    cin>>p[i];
    for(i=0; i<5; i++)
    cout<<p[i]<<" ";
    delete[]p;
    cout<<endl;
    return 0;
    
    }
