#ifndef STOCKOO_H_
#define STOCKOO_H_
#include<iostream>

class Stock
{
	char *company ;
	long shares;
	double share_val;
	double total_val;
	void set_tot(){ total_val=shares *share_val;}
public:
	Stock(const char *co, long n=0,double pr=0.0);//  c constructor 
	Stock();  // default constructoWr
	Stock(const Stock&s);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	double total()const{ return total_val;}
	friend std::ostream& operator<<(std::ostream &os,const Stock& s )
	{
		os<<"\ncompany:"<<s.company<<"\nshares:"<<s.shares<<"\nshare_val:"<<s.share_val<<"\ntotal_Val:"<<s.total_val;
		return os;
	}	
	const Stock& topval(const Stock &s)const;
};
#endif 

