#include<bits/stdc++.h>
using namespace std;

#define int long long int

int power(int a,int b){
	int result= 1;
	while(b){
		if(b%2) result= result*a;
		a= a*a*1LL;
		b=b/2;
	}
	return result;
}
  

int checkFunction(int n,int x){
	int iter=0;
	while(n%x==0){
		iter++;
		n= n/x;
	}
	return iter;
}

int getSumFunction(int n,int x, int k){
	int itr=1;
	int sum=0;
	while(n%x==0 && k!=0){
		n=n/x;
		sum+= n * power(x,itr);
		itr++;k--;
	}
	return sum;
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,x;cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		int temp_min=INT_MAX,index=-1;
		for(int i=0;i<n;i++){
			int p=checkFunction(a[i],x);
			if(p<temp_min){
				temp_min=p;
				index=i;
			}
		}
		// cout<<"the value of the temp_min is "<<temp_min<<" and the value of index is "<<index<<"\n";
		int final_ans=0;
		for(int i=0;i<index;i++){
			final_ans+= a[i];
			final_ans+= getSumFunction(a[i],x,temp_min+1);
		}
		for(int i=index;i<n;i++){
			final_ans+= a[i];
			final_ans+= getSumFunction(a[i],x,temp_min);
		}
		cout<<final_ans<<"\n";
	}
	return 0;
}