#include<cmath>
using namespace std;

class Complex
{
        int real;
        int img;
     public:
           complex();
           complex(int.int);
           void Display();
           Complex operator+(complex &);
           Compex operator++(int);
};
Complex::Complex()
{
        real=img=0;
}
Complex::Complex(int r, int i)
{
        real=r;
        img=i;
}
void Complex::Display()
{
        char ch=(img>=0)?'+':'-';
        cout<<real<<ch<abs(img)<<"i"<<endl;
}
Complex Complex::operator+(Complex &c)
{
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
}
Complex Complex::operator++(int r)
{
        Complex temp;
       temp.real=real++;
        temp.img=img;
        return temp;
}
int main()
{
        Complex c1(10,20);
                Complex c2;
        
        c2=c1++;
        c1.Display();
	c2.Display();
        return 0;
}
