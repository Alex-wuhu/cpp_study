#include"dma.h"
#include<cstring>


baseDMA::baseDMA(const char *l,int r)
{
	label= new char [std::strlen(l)+1];
	std::strcpy(label,l);
	rating=r;
}
baseDMA::baseDMA(const baseDMA &rs)
{
	label=new char[std::strlen(rs.label)+1];
	std::strcpy(label,rs.label);
	rating=rs.rating;
}
baseDMA::~baseDMA()
{
	delete [] label;
}
baseDMA& baseDMA::operator =(const baseDMA &rs)
{
	if(this==&rs)
		return *this;
	delete []label;
	label= new char[std::strlen(rs.label)+1];
	std::strcpy(label,rs.label);
	rating=rs.rating;
	return *this;
}
std::ostream &operator <<(std::ostream &os,const baseDMA &rs)
{
	os<<"Lable: "<<rs.label<<'\n';
	os<<"Rating: "<<rs.rating<<'\n';
	return os;
}
// lacks method
lacksDMA::lacksDMA(const char *c,const char *l,int r):baseDMA(l,r)
{
	std::strcpy(color,c);
	color[39]='\0';
}
lacksDMA::lacksDMA(const char *c,const baseDMA &rs):baseDMA(rs)
{
	std::strcpy(color,c);
	color[39]='\0';
}
std::ostream &operator <<(std::ostream &os,const lacksDMA &ls)
{
	os<<(const baseDMA &)ls;
	os<<"Color: "<<ls.color<<'\n';
	return os;
}
// has method
hasDMA::hasDMA(const char *s,const char* l,int r):baseDMA(l,r)
{
	style=new char[std::strlen(s)+1];
	std::strcpy(style,s);
}
hasDMA::hasDMA(const char *s,const baseDMA &hs):baseDMA(hs)
{
	style=new char[std::strlen(s)+1];
	std::strcpy(style,s);
}
hasDMA::hasDMA(const hasDMA &hs):baseDMA(hs)
{
	style=new char[std::strlen(hs.style)+1];
	std::strcpy(style,hs.style);
}

hasDMA::~hasDMA()
{
	delete [] style;
}
hasDMA& hasDMA::operator =(const hasDMA &hs)
{
	if(this==&hs)
		return *this;
	baseDMA::operator=(hs);//    copy base portion
	delete []style;
	style= new char[std::strlen(hs.style)+1];
	std::strcpy(style,hs.style);
	return *this;
}
std::ostream &operator <<(std::ostream &os,const hasDMA &hs)
{
	os<<(const baseDMA&)hs;
	os<<"Style: "<<hs.style<<'\n';
	return os;
}
