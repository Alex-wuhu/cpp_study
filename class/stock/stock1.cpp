#include"stock.h"
#include<iostream>
#include<cstring>
Stock::Stock()
{
	company=new char[2];	//match delete
	std::strcpy(company,"C");
	shares=0;
	share_val=0;
	set_tot();
}
Stock::Stock(const char *co,long n,double pr)
{
	company=new char[std::strlen(co)+1];
	std::strcpy(company,co);
	if(n<0)
	{
		std::cerr<<"Number of shares can't be negative;"<<company<<"shares set to 0.\n";
		shares=0;
	}
	else
		shares=n;
	share_val=pr;
	set_tot();
}
Stock::Stock(const Stock&s)
{
	company=new char[std::strlen(s.company+1)];
	std::strcpy(company,s.company);
	shares=s.shares;
	share_val=s.share_val;
	set_tot();
}
Stock::~Stock()
{
	std::cout<<"\nBye. "<<company<<'\n';
	delete [] company;
}
void Stock::buy(long num,double price)
{
	if(num<0)
	{
		std::cout<<"Number of shares purchased can't be negative."
			<<"Transaction is aborted.\n";
	}
	else
	{
		shares+=num;
		share_val=price;
		set_tot();
	}
}
void Stock::sell(long num, double price)
{
	using std::cout;
	if(num<0)
	{
		cout<<"NUmber of shares sold can't be negative."<<"Transactin is aborted. \n";
	}
	else if(num>shares)
	{
		cout<<"you can't sell more than you have!\nTransatcion is aborted.\n ";
	}
	else
	{
		shares-=num;
		share_val=price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val=price;
	set_tot();
}
const Stock& Stock::topval(const Stock&s) const
{
	if(s.total_val>total_val)
		return s;
	else 
		return *this;      // this is pointer so return *this
}
