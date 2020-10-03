#include<iostream>
using namespace std;

class A{
	public:
		void g(){ cout<<"A::g()\n";}
		virtual void h(){ cout<<"A::h()\n";}
};

class B:public A{
	public:
		void g(){ cout<<"B::g()\n";}
		void h(){ cout<<"B::h()\n";}
};

int main(){
	A *a=new B;
	a->g();
	a->h();
	return 0;
}
