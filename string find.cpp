#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	a.erase(a.length()-1);
	cout<<a<<endl;
	a.insert(a.length(),a);
	cout<<a<<" "<<a.length();
	return 0;
}
