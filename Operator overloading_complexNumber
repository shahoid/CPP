#include<iostream>
using namespace std;
//complex number has a real and imaginary part
class Complex{
	float real;
	float imaginary;
	public:
		Complex();
		Complex(float r,float i);
		void setReal(float r);
		void setImaginary(float i);
		float getReal();
		float getImaginary();
		Complex operator +(Complex c);
		Complex operator -(Complex c);
};
//operator overload + so as to add two complex number
Complex Complex::operator +(Complex c)
{
	Complex c2;
	c2.real=real+c.real;
	c2.imaginary=imaginary+c.imaginary;
	return c2;
}
//operator overload - so as to minus two complex number
Complex Complex::operator -(Complex c)
{
	Complex c2;
	c2.real=real-c.real;
	c2.imaginary=imaginary-c.imaginary;
	return c2;
}
//default constructor
Complex::Complex()
{
	real=0;
	imaginary=0;
}
//parameterized constructor
Complex::Complex(float r,float i)
{
	real=r;
	imaginary=i;
}
//setter for real part of number
void Complex::setReal(float r)
{
	real=r;
}
//setter for Imaginary part of number
void Complex::setImaginary(float i)
{
	imaginary=i;
}
//getter for real part of number
float Complex::getReal()
{
	return real;
}
//getter for Imaginary part of number
float Complex::getImaginary()
{
	return imaginary;
}
void display(Complex c)
	{
		cout<<c.getReal()<<"+"<<c.getImaginary()<<"i"<<endl;
	}
//global input function not a member function of Complex class
void input(Complex &c)
{
    float r,i;
    cout<<"Enter the complex number real part : ";
    cin>>r;
    cout<<"Enter the imaginary part : ";
    cin>>i;
    c.setReal(r);
    c.setImaginary(i);
}
int main()
{
	Complex c1,c2;
	input(c1);
	input(c2);
	display(c1);
	display(c2);
	cout<<"Sum of the numbers is : ";
	Complex sum;
	sum=c1+c2;
	display(sum);
	cout<<"Difference of the numbers is : ";
	Complex difference;
	difference=c1-c2;
	display(difference);
}
