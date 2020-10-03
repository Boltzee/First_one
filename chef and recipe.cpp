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
      int a[n];
      int index[1005];
      bool visited[1005]={false};
      int count[1005]={0};
      bool cas=true;
      for(int i=0;i<n;i++){
      	cin>>a[i];
      	if(i!=0){
      			if(visited[a[i]]==false){
      				index[a[i]]=i;visited[a[i]]=true;
					count[a[i]]++;
				  }
				else{
					if(index[a[i]]+1==i){
						index[a[i]]=i;count[a[i]]++;
					}
					else{
						cas=false;
					}
				}
		  }
		else {
		index[a[i]]=i;visited[a[i]]=true;
		count[a[i]]++;
	  }
    }
	if(cas){
		sort(count,count+1005);
		for(int i=1004;i>0;i--){
			if(count[i]==0){
				break;
			}
			else{
				if(count[i-1]==count[i]){
					cas=false;
				}
			}
		}
	}
	if(cas){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}    
  }
  return 0;
}

