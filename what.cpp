#include<iostream>
#include<algorithm>

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
		cin>>n;
		int a[n],b[n],j=0,temp=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i!=0){
				if(a[i]-a[i-1]>2){
					b[j]=i-temp;j++;
					temp=i;
				}
			}
		}
		b[j]=n-temp;j++;
		sort(b,b+j);
		if(j==1){
			cout<<b[0]<<" "<<b[0]<<"\n";
		}
		else{
 		 if(b[0]>1)
		   cout<<b[0]<<" "<<b[j-1]<<"\n";
		 else
		   cout<<"1 "<<b[j-1]<<"\n";
	    }
	}
	return 0;
}
