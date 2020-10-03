#include <bits/stdc++.h> 
using namespace std;

//int numOfOnes(long long int x) {
//        return __builtin_popcount(x);
//    }
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int T;
	cin>>T;
	while(T--)
	{
		long long int n,q,even1=0,odd1=0;
		long long int h;
		cin>>n>>q;
		for(int i=0;i<n;i++){
			cin>>h;
			if(__builtin_popcount(h)%2==0){
			  even1++;  
			}
			else
			 odd1++;
		}
		while(q--)
		{
			long long int p,l;
			cin>>p;
			l=__builtin_popcount(p);
			if(l%2==0){
			  cout<<even1<<" "<<odd1<<"\n";}
			else{
			  cout<<odd1<<" "<<even1<<"\n";}
		}
	}
	return 0;
}
