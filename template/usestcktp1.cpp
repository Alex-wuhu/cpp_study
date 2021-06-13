#include<iostream>
#include<cstdlib>
#include<ctime>
#include"stcktp1.h"
const int NUM=10;
int main()
{
	using std::cout;
	using std::cin;

	std::srand(std::time(0));
	cout<<"Please enter stacksize:";
	int stacksize;
	cin>>stacksize;
	Stack<const char *>st(stacksize);
	const char *in[NUM]={
	" 1: Hank Gilgamesh", "2: Kiki Ishtar","3 Betty Rocker","4 Ian Flagranti","5 WOlfgang kibble"
	,"6 Portial Koop","7 Joy Alo","8 Xavreia Paprika","9 Juan Morre","10: Misha mache"};
	const char *out[NUM];

	int processed=0;
	int nextin=0;
	for(int i=0;i<stacksize;i++)
	{
		st.push(in[i]);
	}
	

	for(int i=0; i<stacksize;i++)
	{
		st.pop(out[i]);
		cout<<out[i]<<std::endl;
	}
	cout<<"Bye\n";
	return 0;
}
