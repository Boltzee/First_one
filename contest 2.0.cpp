#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n;
		vector <int> vec;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		vec.push_back(a[0]);
		for(int i=0;i<n-1;i++){
			if(a[i+1]!=a[i])
			  vec.push_back(a[i+1]);
		}
		int temp2=0,ans;
		for(int i=0;i<vec.size();i++){
			int temp=-1,count1=1;
			for(int m=0;m<n;m++){
				if(vec[i]==b[m]){
					if(temp==-1){
						temp=m;continue;
					}
					if(m!=temp+1){
						count1++;
						temp=m;
					}
				}
			}
			if(i==0){
				temp2=count1;
				ans=vec[i];
			}
			else{
				if(count1>temp2){
					temp2=count1;
					ans=vec[i];
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
