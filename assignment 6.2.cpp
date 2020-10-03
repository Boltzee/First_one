#include<iostream>
using namespace std;

class A{
	public:
		void getdata(){
			cout<<"Enter two values for the object of class A:";
			cin>>a_one>>a_two;
		}
		void get_values(int &a, int &b){
			a=a_one;b=a_two;
		}
		void print(){
			cout<<"The values stored in the data members of A are:"<<a_one<<" "<<a_two<<"\n";
		}
		A(int x=0,int y=0):a_one(x),a_two(y){}
		~A(){}
	private:
		int a_one,a_two;
};
class B{
	public:
		void getdata(){
			cout<<"Enter two values for the object of class B:";
			cin>>b_one>>b_two;
		}
		void get_values(int &a, int &b){
			a=b_one;b=b_two;
		}
		void print(){
			cout<<"The values in the data members of B are:"<<b_one<<" "<<b_two<<"\n";
		}
		B(int x=0,int y=0):b_one(x),b_two(y){}
		~B(){}
	private:
		int b_one,b_two;
};
class C{
	public:
		void add_values(A &x,B &y);
		void print();
		~C(){}
	private:
		int c_one,c_two;
};

void C::add_values(A &x,B &y){
	int a,b,c,d;
	x.get_values(a,b);
	y.get_values(c,d);
	c_one=a+c;
	c_two=b+d;
}

void C::print(){
	cout<<"The values stored in the data members of C after adding up the data members of a and b are:"<<c_one<<" "<<c_two<<"\n";
}

int main(){
	A q;
	B r;
	C s;
	q.getdata();
	r.getdata();
	s.add_values(q,r);
	s.print();
	return 0;
}
