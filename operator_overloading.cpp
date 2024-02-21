#include<iostream>
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
	   Complex operator+=(complex &);
	   Compex operator-()
};
Complex::Complex()
{
	ral=img=0;
}
Complex::Complex(int r, int i)
{
	real=r;
	img=i;
}
void Complex::Display()
{
	char ch=(img>=0)?'+'':'-';
	cout<<real<<ch<abs(img)<<""i<<endl;
}
Complex Complex::oerator+(Complex &c)
{
	Complex temp;
	temp.real=real+c.real;
	temp.img=img+c.ig;
	return temp;
}
Complex Complex::operator~()
{
	Complex temp;
	emp.real=real;
	temp.img=img;
	return temp;
}
int main()
{
	Complex c1(4,5) ,c2(5,6)l
		Complex c3;
	//c3=c1+c2;
	c3=c1;//c3=c1.operator+(c2)
	c3.Display();//4=5i
	return 0;
}
