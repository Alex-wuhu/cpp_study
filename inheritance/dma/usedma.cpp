#include"dma.h"
#include<iostream>
int main()
{
	using std::cout;
	using std::endl;

	baseDMA shirt("Portablelly",8);
	lacksDMA ballon("red","Blimpo",4);
	hasDMA map("Mercator","Buffalo",5);
	cout<<"Dispalying baseDMA object:\n";
	cout<<shirt<<endl;

	cout<<"Dispalying lacksDMA object:\n";
	cout<<ballon<<endl;
	
	cout<<"Dispalying hasDMA object:\n";
	cout<<map<<endl;
	lacksDMA balloon2(ballon);
	cout<<"Result of lacksDMA copy:\n";
	cout<<balloon2<<endl;
	hasDMA map2;
	map2=map;
	cout<<"Result of hasDMA assignment:\n";
	cout<<map2<<endl;

	return 0;
}
	
