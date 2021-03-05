#include"mem.h"
#include<iostream>
int main()
{
	using std::cout;
	TablePlayer player1("Chunck","Blizzd",true);
	TablePlayer player2("Tara","Boomdea",false);
	RatedPlayer rplayer1(1140,"Mallory","Duck",true);
	rplayer1.Name();
	if(rplayer1.HasTable())
		cout<<": has a table\n";
	else
		cout<<": hasn't a table\n";
	cout<<"Rating: "<<rplayer1.Rating()<<'\n';
	RatedPlayer rplayer2(3,player1);
	rplayer2.Name();
	if(rplayer2.HasTable())
		cout<<": has a table\n";
	else
		cout<<": hasn't a table\n";
	cout<<"Rating: "<<rplayer2.Rating()<<'\n';
	player1.Name();
	if(player1.HasTable())
		cout<<": has a table\n";
	else
		cout<<": hasn't a table\n";
	player2.Name();
	if(player2.HasTable())
		cout<<": has a table\n";
	else
		cout<<": hasn't a table\n";

	return 0;
}
