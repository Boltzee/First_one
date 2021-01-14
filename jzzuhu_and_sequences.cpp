#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007

signed main(){
	int x,y;cin>>x>>y;
	int n;cin>>n;
	int a[6]={x-y,x,y,y-x,-1 * x , -1 * y};
	cout<< (a[n%6]%mod + mod)%mod<<endl;
    return 0;
}