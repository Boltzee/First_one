#include<iostream>
#include<string.h>
using namespace std;

class date
{
	public:
		void getdate();
		void showdate();
		date(int x=0,int y=0,int z=0);
		~date();
	private:
		int mon,day,year;
};
void date::getdate(){
	string s;cin>>s;
	mon=((s[0]-48)*10+(s[1]-48));day=((s[3]-48)*10+(s[4]-48));year=((s[6]-48)*10+(s[7]-48));
}
void date::showdate(){
	if(year<10)
	  cout<<"The date is:"<<mon<<"/"<<day<<"/0"<<year<<"\n";
	else
	  cout<<"The date is:"<<mon<<"/"<<day<<"/"<<year<<"\n";
}
date::date(int x,int y,int z): mon(x),day(y),year(z){}
date::~date(){}

int main()
{
	date d;
	cout<<"Enter the date in month/day/year format seperated by /: ";
	d.getdate();
	d.showdate();
	return 0;
}
