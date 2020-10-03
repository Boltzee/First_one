#include<iostream>
using namespace std;

class complex
{
	public:
		void get_num(){
			int s,d;
			cout<<"\nEnter the real and complex parts of the number:";
			cin>>s>>d;
			real=s;comp=d;
		}
		void print(){
			cout<<real<<"+i"<<comp<<"\n";
		}
		complex add(complex& a);
		complex subtract(complex& a);
		
	private:
		int real;
		int comp;
};

complex complex::add(complex& a)
{
	complex temp;
	temp.real=real+a.real;
	temp.comp=comp+a.comp;
	return temp;
}

complex complex::subtract(complex& a)
{
    complex temp;
	temp.real=real-a.real;
	temp.comp=comp-a.comp;
	return temp;	
}

int main()
{
	complex x,y,z,k;
	cout<<"Enter two complex numbers:\n";
	x.get_num();
	y.get_num();
	z=x.add(y);
	k=x.subtract(y);
	z.print();
	k.print();
	return 0;
}
