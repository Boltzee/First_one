#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int T,S;
    cin>>T>>S;
    while(T--)
    {
      if(S==1)
      {
      	int n,q;
      	vector <long int> a,b,c;
      	cin>>n;
      	for(int i=1;i<=n;i++){
      		cin>>q;
      		a.push_back(q);
		  }
		for(int i=1;i<=n;i++){
			cin>>q;
			b.push_back(q);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		int i=n-1,flag=1,j=0;
		while(flag==1 && i>=0){
			if(i==n-1){
			c.push_back(a[i]);a.pop_back();}
			else{
				for(int m=0;m<c.size();m++){
					if(c[m]==a[i]){
					   c.push_back(a[i]);a.pop_back();flag=1;break;	
					}
					else{
						flag=0;continue;
					}
				}
				if(flag==0){
					cout<<"NO"<<"\n";
					goto kiran;
				}
			}
			if(b[i]>a[i]){
				c.push_back(b[i]);b.pop_back();
			}
			else{
				cout<<"NO"<<"\n";
					goto kiran;
			}
			i--;
		}
		if(flag==1 && c.size()==2*n){
			cout<<"YES"<<"\n";
		}
		a.clear();b.clear();c.clear();
	  }
	  else{
	  	continue;
	  }
	  kiran:
	  	continue;
	}
	return 0;
}
