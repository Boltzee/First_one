#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		long long int n;
		cin>>n;
		if(n/2==0){
			cout<<"0\n";
		}
		else{
			long long int a,b;
			a=n/2;
			b=n-a;
			cout<<b-1<<"\n";
		}
	}
	return 0;
}
