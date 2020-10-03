#include<iostream>
using namespace std;

class emp
{
	public:
		void getData(int a,float b);
		void display();
		emp(int a=0,float b=0.0);
		~emp();
	private:
	    int num;
		float comp;	
};

void emp::getData(int a,float b){
	num=a;comp=b;
}
void emp::display(){
	cout<<"Employee's number:"<<num<<" Employee's compensation:"<<comp<<"\n";
}
emp::emp(int a,float b): num(a),comp(b){}
emp::~emp(){}

int main()
{
	int k;float m;
	emp* s=new emp[3];
	for(int i=0;i<3;i++){
		cout<<"Enter employee "<<i+1<<"'s number and compensation:";
		cin>>k>>m;
		s[i].getData(k,m);
	}
	cout<<"The record for the three employees is successfully created:\n";
	for(int i=0;i<3;i++){
		s[i].display();
	}
	delete [] s;
	return 0;
}

