#include<string>

using std::string;
class TablePlayer
{
	string first;
	string last;
	bool hasTable;
public:
	TablePlayer(const string &f="none",const string &l="none",bool ht=false);
	void Name()const;
	bool HasTable()const {return hasTable;};
	void ResetTable(bool v){hasTable=v;};
};
class RatedPlayer:public TablePlayer
{
	unsigned int rating;
public:
	RatedPlayer(unsigned int r=0, const string &f="none",const string &l="none",bool ht=false);
	RatedPlayer(unsigned int r, const TablePlayer &tp);
	unsigned int Rating()const{return rating;}
	void ResetRating(unsigned int r){rating =r;}
};
