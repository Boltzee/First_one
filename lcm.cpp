#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b;
	c=__gcd(a,b);
	cout<<c;
	int n=a*b;
	cout<<n/c;
	swap(a,b);
	cout<<a<<b;
}
