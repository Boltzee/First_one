#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	int T;cin>>T;
//	while(T--){
		int n,k,well=0;
//		cin>>n>>k;
    for (n=1000;n>0;n--){
     for(k=n;k>0;k--){
	    well++;
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
        int temp_sum=0;
        int temp_count=0;
        for (int i=0;i<ans.size();i++){
        	temp_sum+=ans[i];
        	if(temp_sum>0) temp_count++;
//        	cout<<"sum "<<i+1<<": "<<temp_sum<<"\n";
		}
		if(temp_count!=k) {
			cout<<"The problem is in N="<<n<<" and k="<<k<<"\n";
		}
        //vector <int> ans;
//        for(int i=0;i<ans.size();i++){
//        	cout<<ans[i]<<" ";
//        }
//        cout<<"\n";
	}}
	cout<<"well="<<well;
	return 0;
}
