#include<iostream>
using namespace std;

class Time{
public:
	void gettime();
	void print();
	Time(int h=0,int m=0,int s=0):hr(h),min(m),sec(s){}
	Time operator-(const Time &a);
	~Time(){}
private:
	int hr,min,sec;
};
void Time::gettime(){
	int a,b,c;
	cout<<"Enter the hours,minutes and seconds resp. in military format:";
	cin>>a>>b>>c;
	hr=a;min=b;sec=c;
}
void Time::print(){
	cout<<hr<<":"<<min<<":"<<sec<<"\n";
}
Time Time::operator-(const Time &a){
	Time temp;
	temp.hr=hr-a.hr;
	temp.min=min-a.min;
	temp.sec=sec-a.sec;
	if(temp.hr<0)  temp.hr=-temp.hr;
	if(temp.min<0) temp.min=-temp.min;
	if(temp.sec<0) temp.sec=-temp.sec;
	return temp;
}

int main()
{
	Time x,y,z;
	x.gettime();
	y.gettime();
	z=x-y;
	cout<<"the difference between the two instances of time is: ";
	z.print();
	return 0;
}