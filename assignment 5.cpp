#include<iostream>
using namespace std;

class complex
{
public:
	complex(int r=0,int i=0):re(r),im(i){}
	void getvalue();
	void print();
	complex operator+(const complex &a);
	~complex(){}
private:
	int re,im;
};
void complex::getvalue(){
	int a,b;
	cout<<"Enter the values of real and imaginary part:";
	cin>>a>>b;
	re=a;im=b;
}
void complex::print(){
	cout<<re<<"+i"<<im<<"\n";
}
complex complex::operator+(const complex &a){
	complex temp;
	temp.re=re+a.re;
	temp.im=im+a.im;
	return temp;
}

int main()
{
	complex x,y,z;
    x.getvalue();
    y.getvalue();
    z=x+y;
    z.print();
    return 0;
}