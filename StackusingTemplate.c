#include<iostream>
using namespace std;
template<typename T>
class Stack
{ 
    int size;
    T *arr;
    int top;
 public:
     Stack();
     Stack(int);
     void push(T);
     T pop();
     bool isfull();
     bool isempty();
     int getsize();
  };
 template<typename T> 
 Stack<T>::Stack()
 {
    size=5;
    arr=new T(size);
    top=-1;
  }
 template<typename T> 
 Stack<T>::Stack<int s>
 {
     size=5;
     arr=new T(size);
     top=-1;
  }
  template<typename T>
  void Stack<T>::push(T val)
  {
    if(!isfull())
       arr[++top]=val;
      else
      cout<<"overflow!"<<endl;
  }
  template<typename T>
  T Stack<T>::pop()
  {
    if(!isempty())
       return arr[top--];
     else
     {
         cout<<"Underflow"<<endl;
         return 0;
        }
        
  template<typename T>      
  bool Stack<T>::isfull()
  {
     return top=size-1;
    }
    
  template<typename T>  
  bool Stack<T>::isempty()
  {
     return top==-1;
   }
   template<typename T>
   int Stack<T>::getsize()
   {
     return top+1;
   }
   
   
   int main()
   {
     Stack<int> s1(6);
     s1.push(10);
     s1.push(20);
     s1.push(30);
     
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   
   Stack<char*> s2;
   s2.push("Wipro");
   s2.push("Tcs");
   s2.push("Infoys");
   
 cout<<s2.pop()<<endl;
 cout<<s2.pop()<<endl;
 cout<<s2.pop()<<endl;
 
 return 0;
 }
