#include"time.h"
#include<iostream>
void  Time::show()const
{
	std::cout<<hours<<" hours\n"<<minutes<<" minutes\n";
}
Time Time::operator+(const Time &t)const
{
	Time sum;
	sum.minutes=minutes+t.minutes;
	sum.hours=hours+t.hours+sum.minutes/60;
	sum.minutes%=60;
	return sum;
}
Time Time::operator*(double n)const
{
	Time result;
	long totalminutes=hours*n*60+minutes*n;
	result.hours=totalminutes/60;
	result.minutes=totalminutes%60;
	return result;
}
Time operator*(double m,Time const&t)
{
	Time result;
	long totalminutes=t.hours*m*60+t.minutes*m;
	result.hours=totalminutes/60;
	result.minutes=totalminutes%60;
	return result;
}

