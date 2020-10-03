#include<iostream>
#include<string.h>
using namespace std;

struct cars
{
	string name;
	int year;
	int power;
};

void re_size(cars* &u,int n)
{
	if(n==0) return;
	cars arr[100];
	for(int i=0;i<100;i++){
		arr[i].name=u[i].name;
		arr[i].power=u[i].power;
		arr[i].year=u[i].year;
	}
	delete [] u;
	u=new cars [100+n];
	for(int i=0;i<100;i++){
		u[i].name=arr[i].name;
		u[i].power=arr[i].power;
		u[i].year=arr[i].year;
	}
}

int main()
{
	cars* p=new cars[100];
	for(int i=0;i<100;i++){
		cin>>p[i].name>>p[i].power>>p[i].year;
	}
	re_size(p,500);
	cout<<"Enter the information of addtional 500 cars\n";
	for(int i=100;i<600;i++){
		cin>>p[i].name>>p[i].power>>p[i].year;
	}
	for(int i=0;i<600;i++){
		cout<<p[i].name<<" "<<p[i].power<<" "<<p[i].year<<"\n";
	}
	return 0;
}
