#include<iostream>
class Complex
{
	double real;
	double fake;
public:
	Complex()
	{
		real=0;
		fake=0;
	}
	Complex(double r, double f)
	{
		real=r;
		fake=f;
	}
	~Complex()
	{
	//	std::cout<<"Bye!";
	}
	Complex operator+(const Complex &b)const;
	Complex operator-(const Complex &b)const;
	Complex operator*(const Complex &b)const;
	Complex operator*(double x)const;
	Complex operator~()const;
	friend Complex operator*(double y, const Complex &b);
	friend std::ostream& operator<<(std::ostream &os,const Complex &c)
	{
		os<<"real:"<<c.real<<" fake:"<<c.fake;
		return os;
	}
	friend std::istream& operator>>(std::istream &in,Complex &c)
	{
		std::cout<<"real:";
		in>>c.real;
		std::cout<<"fake:";
		in>>c.fake;
		return in ;
	}

};
