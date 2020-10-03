#include<iostream>
using namespace std;
class B;
class C;

class A{
	public:
		void getdata(){
			cout<<"Enter two values for object of class A:";
			cin>>a_one>>a_two;
		}
		void print(){
			cout<<"The values stored in the data members of A are:"<<a_one<<" "<<a_two<<"\n";
		}
		friend C add_values(const A &x, const B &y);
		A(int x=0,int y=0):a_one(x),a_two(y){}
		~A(){}
	private:
		int a_one,a_two;
};

class B{
	public:
		void getdata(){
			cout<<"Enter two values for object of class B:";
			cin>>b_one>>b_two;
		}
		void print(){
			cout<<"The values stored in the data members of B are:"<<b_one<<" "<<b_two<<"\n";
		}
		friend C add_values(const A &x, const B &y);
		B(int x=0,int y=0):b_one(x),b_two(y){}
		~B(){}
	private:
		int b_one,b_two;
};

class C{
	public:
		void print(){
			cout<<"The values stored in the data members of C after adding the data members of A and B are:"<<c_one<<" "<<c_two<<"\n";
		}
		friend C add_values(const A &x, const B &y);
		C(int x=0,int y=0):c_one(x),c_two(y){}
		~C(){}
	private:
		int c_one,c_two;
};

C add_values(const A &x, const B &y){
	C temp;
	temp.c_one=x.a_one+y.b_one;
	temp.c_two=x.a_two+y.b_two;
	return temp;
}

int main()
{
	A q;
	B r;
	C s;
	q.getdata();
	r.getdata();
	s=add_values(q,r);
	s.print();
	return 0;
}
