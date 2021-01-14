#include<bits/stdc++.h>
using namespace std;

#define endl "\n";
#define int long long int
int n; 

int isValley(int index,int a[]){
	if(index==0 || index==n-1) return 0;
	if(a[index-1]>a[index] && a[index+1]>a[index]) return 1;
	return 0;
}

int inHill(int index,int a[]) {
	if(index==0 || index==n-1){
		return 0;
	}
	if(a[index-1]<a[index] && a[index+1]<a[index]) return 1;
	return 0;
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int final=0;
	    int visited[n]={0};
	    for(int i=1;i<n-1;i++){
	    	if(a[i]>a[i-1] && a[i]>a[i+1]) {visited[i]=1; final++;}
	    	else if(a[i]<a[i-1] && a[i]<a[i+1]) {visited[i]=1; final++;}
	    }
	    int ans= final;
	    for(int i=1;i<n-1;i++){
	    	int original=a[i];
	    	a[i]= a[i-1];
	    	ans = min(ans,final- visited[i-1] - visited[i+1] - visited[i] + isValley(i-1, a) + isValley(i+1, a) + isValley(i, a )+ inHill(i-1,a) + inHill(i+1,a) + inHill(i,a));
	    	a[i]= a[i+1];
	    	ans = min(ans,final- visited[i-1] - visited[i+1] - visited[i] + isValley(i-1, a) + isValley(i+1, a) + isValley(i, a )+ inHill(i-1,a) + inHill(i+1,a) + inHill(i,a));
	    	a[i] = original;   
	    }
	    cout<<ans<<endl;
	}
	return 0;
}