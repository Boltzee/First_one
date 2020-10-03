#include<iostream>
using namespace std;

int main()
{
	for(int i=0;i<10;i++){
		const int n=i;
		n=i+1;
		cout<<n;
	}
	
}
