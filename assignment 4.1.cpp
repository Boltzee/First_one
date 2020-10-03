#include<iostream>
using namespace std;

class Int
{
	public:
		void getValue(int a){
			i=a;
		}
		void print(){
			cout<<i<<"\n";
		}
		Int add(Int y){
			return i+y.i;
		}
		Int(int s=0): i(s){}
		~Int(){}
	private:
		int i;
};

int main()
{
	Int a(5),b(10),c;
	c=a.add(b);
	c.print();
	return 0;
}
