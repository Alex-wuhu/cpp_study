#include<iostream>
#include"mem.h"
TablePlayer::TablePlayer(const string &f,const string &l,bool ht): first(f),last(l),hasTable(ht){}
void TablePlayer::Name()const
{
	std::cout<<last<<", "<<first;
}
RatedPlayer::RatedPlayer(unsigned int r, const string &f,const string &l,bool ht):TablePlayer(f,l,ht)
{
	rating=r;
}
RatedPlayer::RatedPlayer(unsigned int r,const TablePlayer &tp):TablePlayer(tp),rating(r){}
