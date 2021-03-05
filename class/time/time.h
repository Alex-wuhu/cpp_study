#include<iostream>
class Time
{
	int hours;
	int minutes;
public:
	Time()
	{
		hours=0;
		minutes=0;
	}
	Time(int h,int m=0)
	{
		hours=h;
		minutes=m;
	}
	Time operator+(const Time&t)const;
	Time operator-(const Time&t)const;
	Time operator*(double n)const;
	friend Time operator*(double m, const Time&t);
	friend std::ostream& operator<<(std::ostream &os,const Time &t)
	{
		os<<t.hours<<" houres."<<t.minutes<<" minutes.";
		return os;
	}
	void show()const;
};
