#include"worker.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

Worker::~Worker(){}
void Worker::Data()const
{
	cout<<"Name:"<<name<<endl;
	cout<<"Employee ID:"<<id<<endl;
}
void Worker::Get()
{
	getline(cin,name);
	cout<<"Enter Worker's ID:";
	cin>>id;
	while(cin.get()!='\n')
		continue;
}
// Waiter method
//
void Waiter::Set()
{
	cout<<"Enter waiter's name:";
	Worker::Get();
	Get();
}
void Waiter::Show()const
{
	cout<<"category: waiter\n";
	Worker::Data();
	Data();
}
void Waiter::Data()const
{
	cout<<"Panache rating:"<<panache<<endl;
}
void Waiter::Get()
{
	cout<<"Enter waiter's panahce rating:";
	cin>>panache;
	while(cin.get()!='\n')
		continue;
}
// singer method
//
char *Singer::pv[Singer::Vtypes]={"other","alto","contralto","soprano","bass","baritone","tenor"};
void Singer::Set()
{
	cout<<"Enter singer's name:";
	Worker::Get();
	Get();
}
void Singer::Show()const
{
	cout<<"Category: singer\n";
	Worker::Data();
	Data();
}
void Singer::Data()const
{
	cout<<"Vocla range:"<<pv[voice]<<endl;
}
void Singer::Get()
{
	int i;
	cout<<"Enter number of Singer's vocal range:\n";
	for( i=0;i<Vtypes;i++)
	{
		cout<<i<<":"<<pv[i]<<"  ";
		if(i%4==3)
			cout<<endl;
	}
	if(i%4!=0)
		cout<<endl;
	cin>>voice;
	while(cin.get()!='\n')
		continue;
}

//SIngerwaiter methods
//
void SingingWaiter::Data()const
{
	Singer::Data();
	Waiter::Data();
}
void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}
void SingingWaiter::Set()
{
	cout<<"Enter singing waiter's name:";
	Worker::Get();
	Get();
}
void SingingWaiter::Show()const
{
	cout<<"Category: singing waiter:\n";
	Worker::Data();
	Data();
}
