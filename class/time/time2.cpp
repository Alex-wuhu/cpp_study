#include"time.h"
int main()
{
	Time a(3,10);
	a.show();
	Time b(5,45);
	b.show();
	Time c=a+b;
	c.show();
	std::cout<<"C*2:\n";
	c=2*c;
	std::cout<<c<<"test";
	return 0;
}
