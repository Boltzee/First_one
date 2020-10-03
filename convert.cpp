#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define mp make_pair
#define pb push_back


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int T;
  cin>>T;
  while(T--){
      int n;cin>>n;
      string a,b;
      cin>>a>>b;
      int count=0,counta=0,countb=0,c1=0,c2=0;
      for(int i=0;b[i];i++){
      	if(b[i]=='a' || b[i]=='b') {
      		count++;
      		if(b[i]=='a') counta++;
      		else countb++;
		  }
		if(a[i]=='a' || a[i]=='b') {
//      		count++;
      		if(a[i]=='a') c1++;
      		else c2++;
		  }
	  }
	  if(count==b.length()){
	  	if(counta!=0 && c1==0){
	  		cout<<"-1\n";
		  }
		else if(countb!=0 && c2==0){
			cout<<"-1\n";
		}
		else if(counta==0 && c1!=0){
			cout<<"-1\n";
		}
		else{
			if(b==a){
				cout<<"0\n";
				goto kiran;
			}
			int indexa[n],indexb[n],j=0,k=0;
			string c=a;
			int ct1=0,ct2=0;
			for(int i=0;i<b.length();i++){
				if(b[i]!=a[i]){
					if(b[i]=='a'){
//						a[i]='a';
						indexa[j]=i;j++;
					}
					else{
//						a[i]='b';
                        if(a[i]=='a'){
                        	cout<<"-1\n";
                        	goto kiran;
						}
						indexb[k]=i;k++;
					}
				}
				else{
					if(b[i]=='a') ct1++;
					else ct2++;
				}
			}
			if(ct1==counta){
				cout<<"1\n";
				indexb[k]=a.find('b');k++;
                sort(indexb,indexb+k);
			    cout<<k<<" ";
			    for(int m=0;m<k;m++){
					cout<<indexb[m]<<" ";
			    }cout<<"\n";
			    goto kiran;
			}
			if(ct2==countb){
				cout<<"1\n";
				indexa[j]=c.find('a');j++;
                sort(indexa,indexa+j);
			    cout<<j<<" ";
			    for(int m=0;m<j;m++){
					cout<<indexa[m]<<" ";
			    }cout<<"\n";
			    goto kiran;
			}
			cout<<"2\n";
			indexb[k]=a.find('b');k++;
            sort(indexb,indexb+k);
			cout<<k<<" ";
			for(int m=0;m<k;m++){
					cout<<indexb[m]<<" ";
			}cout<<"\n";
            indexa[j]=c.find('a');j++;
            sort(indexa,indexa+j);
			cout<<j<<" ";
			for(int m=0;m<j;m++){
					cout<<indexa[m]<<" ";
			}cout<<"\n";
		}
	  }
	  else{
	  	cout<<"-1\n";
	  }
	  kiran:
	  	continue;
  }
  return 0;
}

