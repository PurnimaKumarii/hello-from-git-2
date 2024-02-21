#include<stdio.h>
class Student
{
  int roll_no;
  char name[20];
  char city[20];
public:  
  Student();
  {
   cout<<"Enter roll_n0"<<
   cin>>roll_no;
   cout<<"Enter name"<<
   cin>>name;
   cout<<"Enter city"<<
   cin>>city;
  }
 void Display()
 { 
   cout<<endl<<roll_no<<"\t"name<"\t"<<city;
  int main()
  {
   Studnt s;
   s.Display();
   return 0;
   }
   
  
