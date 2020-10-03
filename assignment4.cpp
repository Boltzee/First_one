#include<iostream>
using namespace std;

class employee
{
	public:
		int emp_no;
		float comp;
		void get_data(int a,float b){
			emp_no=a;
			comp=b;
		}
		void display(){
			cout<<"Employee's number:"<<emp_no<<" compensation:"<<comp<<"\n";
		}
};

int main()
{
	int x;
	float y;
	employee s[3];
	cout<<"Enter the employee number and his compensation in the respective order:\n";
	for(int i=0;i<3;i++){
		cout<<"Employee "<<i+1<<":";
		cin>>x>>y;
		s[i].get_data(x,y);
	}
	cout<<"\nAn register has been created for the three employees:\n";
	for(int i=0;i<3;i++){
		s[i].display();
	}
	return 0;
}
