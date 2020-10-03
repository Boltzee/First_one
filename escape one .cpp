#include<bits/stdc++.h>
using namespace std;
#define fast()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a[1000005];

int main(){
	fast();
	int T;cin>>T;
	while(T--){
	   int n;cin>>n;
	   bool visited[n]={false};
	   int num=0,ans=0;
	   for(int i=0;i<n;i++) {
	   	cin>>a[i];
	   	if(a[i]==1) {visited[i]=true;num++;}
	   }
	   if(num==1){ cout<<"-1\n";continue;}
	   else if(num==0){ cout<<"0\n";continue;}
	   for(int i=0;i<n;i++){
	   	int dist1=0,dist2=0;
        if(visited[i]){
        	for(int m=i;m<i+n;m++){
        		if(m==i){continue;}
        		dist1++;
        		if(a[(m%n)]>0){break;}
        	}
        	for(int m=i;m>i-n;m--){
        		if(m==i){continue;}
        		dist2++;
        		if(a[((m+n)%n)]>0){break;}
        	}
        	if(dist1<dist2){
        	   ans+=dist1;
               a[(i+dist1)%n]++;
               visited[(i+dist1)%n]=false;
               a[i]=0;
//               cout<<dist1<<"-v-"<<(i+dist1)%n<<"\n";
        	}
        	else{
        	   ans+=dist2;
               a[((i-dist2+n)%n)]++;
               visited[((i-dist2+n)%n)]=false;
               a[i]=0;
//               cout<<dist2<<"--"<<((i-dist2+n)%n)<<"\n";
        	}
        	visited[i]=false;
        }
	   }
//	   for(int i=0;i<n;i++) cout<<a[i]<<" ";
	   
	   cout<<ans<<"\n";	
	}
	return 0;
}



  

