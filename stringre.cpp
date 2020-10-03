#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	for(int i=a.length()-1;i>0;i--){
		if(a.find(a[i])){
			a.erase(i,1);
		}
	}
	cout<<a;
}
