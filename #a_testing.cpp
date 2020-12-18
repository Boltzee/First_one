#include <iostream>
using namespace std;

int main(){
	int* p;int q;
	cin>>q;
	p= &q;
	*p=10;
	cout<<q;
	return 0;
}