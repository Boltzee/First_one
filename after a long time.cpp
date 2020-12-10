#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int count=0;
		int possible= (n%2==0) ? n/2 : (n/2 +1);
		if(k>possible){
            count= k-possible;
		}
		int reverse_count=0;
		if(k<possible){
			reverse_count=possible-k;
		}
        vector <int> odd,even,ans;
        for(int i=n;i>0;i--){
        	if(i%2!=0){
        		if(reverse_count>0){
        			ans.push_back(-1*i);reverse_count--;
				}
        		else ans.push_back(i);
        	}
        	else{
        		if(count<=0) ans.push_back(-1*i);
        		else {ans.push_back(i);count--;}
        	}
        }
        reverse(ans.begin(),ans.end());
        //vector <int> ans;
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<"\n";
	}
	return 0;
}
