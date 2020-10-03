#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
	fast();
	int T;cin>>T;
	while(T--){
       int n;cin>>n;
       int a[n];int freq[1024]={0};
       int flag=0;
       int ones,temp=0;
       for(int i=0;i<n;i++) {
       	cin>>a[i];
       	ones=(int)log2(a[i])+1;
       	if(ones>temp){
       		temp=ones;
		   }
        freq[a[i]]++;}
        int u=pow(2,temp);
       for(int i=1;i<=u;i++){
       	int temp[1024]={0};
        for(int m=0;m<n;m++){
        	int l=a[m]^i;
        	if(l>=1024) {
        		continue;
			}
			else{
				temp[l]++;
			}
        }
        int count=0;
        for(int k=0;k<1024;k++){
           if(temp[k]==freq[k]) count++;
        }
        if(count==1024)  {cout<<i<<"\n";flag=1;break;}
       }
       if(flag==0){
       	cout<<"-1\n";
	   }
	}
	return 0;
}
