#include<iostream>
using namespace std;

class A
{
	public:
		int a,b;
		A add(A x,A y){
			A temp;
			temp.a=a+x.a+y.a;
			temp.b=b+x.b+y.b;
			return temp;
		}
};

int main(){
	A x={1,2};   //
	A y={2,3};   //  Initialising the three members of the class A
	A z={3,4};   //
	A ans;
	ans=x.add(y,z);
	cout<<ans.a<<" "<<ans.b;
	return 0;
}
