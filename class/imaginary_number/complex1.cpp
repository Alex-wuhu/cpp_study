#include"complex.h"

Complex Complex::operator+(const Complex &b)const
{
	Complex c;
	c.real=real+b.real;
	c.fake=fake+b.fake;
	return c;
}
Complex  Complex::operator-(const Complex &b)const
{
	Complex c;
	c.real=real-b.real;
	c.fake=fake-b.fake;
	return c;
}
Complex Complex:: operator*(const Complex &b)const
{
	Complex c;
	c.real=real*b.real-fake*b.fake;
	c.fake=real*b.fake-fake*b.real;
	return c;
}
Complex Complex:: operator*(double x)const
{
	Complex c;
	c.real=real*x;
	c.fake=fake*x;
	return c;
}
Complex Complex::operator~()
{
	Complex c;
	c.real=real;
	c.fake=-fake;
	return c;
}	
Complex operator*(double y, const Complex &b)
{
	return b*y;
}

