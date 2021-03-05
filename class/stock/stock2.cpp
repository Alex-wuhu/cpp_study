#include<iostream>
#include"stock.h"
int main()
{
	using std::cout;
	Stock flu("Alex",20,12.50);
	cout<<flu;
	Stock defult;
	cout<<defult;
	Stock test=flu;
	cout<<test;

/*	flu.buy(15,18.124);
	cout<<flu;
	flu.sell(400,20.00);
	cout<<flu;
	flu.buy(3000000,40.125);
	cout<<flu;
*/
	return 0;
}
