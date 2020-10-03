#include<iostream>
using namespace std;

int main()
{
	int T;cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int p[n+1];
		bool flag=true;
		for(int i=1;i<n+1;i++){
			cin>>p[i];
			if(i==1 || p[i]<p[i-1])  
			   continue;
			else
			  flag=false;
		}
		if(flag){
			if(n%4==0 || n%4==1){
            int i=1,j=n;
            cout<<(n/4)*3<<"\n";
            l=n/4;
            while(l--){
                cout<<i<<" "<<i+1<<" "<<n<<"\n";
                cout<<i+1<<" "<<n-1<<" "<<n<<"\n";
                cout<<i+1<<" "<<n-1<<" "<<n<<"\n";
                i=i+2;
                n=n-2;
            }
         }
        else{
            cout<<"-1"<<"\n";
         }
		}
		else{
			int index[n],j=-1;
			for(int i=1;i<n+1;i++){
				if(p[i]!=i){
					index[++j]=i;
				}
			}
			
		}
	}
	return 0;
}
