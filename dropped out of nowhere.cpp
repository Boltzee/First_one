#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,x,y;
		cin>>n>>x>>y;
		if(x+y==0){
			cout<<"there is no way that the folowing is going to happen. So i request you to please reconsider your options.";	
		}
		else{
			cout<<"yes the way metioned by you is possible."
		}
	}
	return 0;
}
