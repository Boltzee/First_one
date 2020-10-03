#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(a) a.begin(),a.end()
#define uniq(a) a.resize(distance(a.begin(),unique(all(a))));
#define sortvec(a) sort(all(a));
#define even(a) (!(a&1))
//int agb[1000000],bga[1000000]; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int T;cin>>T;
    while(T--){
        long long int n;cin>>n;
        unordered_map <long long int,long long int> ma,mb;
        vector <long long int> order;
        for(int i=0;i<n;i++){
            long long int x;cin>>x;
            order.pb(x);
            ma[x]=ma[x]+1;
        }
        for(int i=0;i<n;i++){
            long long int x;cin>>x;
            order.pb(x);
            mb[x]=mb[x]+1;
        }
        uniq(order);sortvec(order);
        long long int cost=0;
        
int i=0;
while(!order.empty()){
	long long int front=order[i];
	if(!even(ma[front]+mb[front])){
		cout<<"-1\n";goto kiran;
	}
	else{
		if(ma[front]==mb[front]){
			//order.erase(order.begin());
			i++;continue;
		}
		for(int j=order.size()-1;j>i;j--){
			if(!even(ma[order[j]]+mb[order[j]])){
				cout<<"-1\n";goto kiran;
			}
			else{
		        if((ma[front]>mb[front]) && (ma[order[j]]<mb[order[j]])){
		            int num=(ma[front]-mb[front])/2;
					int num2=(mb[order[j]]-ma[order[j]])/2;
					int m=min(num,num2);
					ma[front]-=m;mb[front]+=m;
					ma[order[j]]+=m;mb[order[j]]-=m;
					cost=cost+m*min(front,order[j]);
					if(ma[order[j]]==mb[order[j]]){
						order.erase(order.begin()+j);
					}
					if(ma[front]==mb[front]){
//						order.erase(order.begin());
						i++;goto kiran2;//break;
					}	
				}
				else if((ma[front]<mb[front]) && (ma[order[j]]>mb[order[j]])){
					int num=(mb[order[j]]-ma[order[j]])/2;
					int num2=(ma[front]-mb[front])/2;
					int m=min(num,num2);
					ma[front]+=m;mb[front]-=m;
					ma[order[j]]-=m;mb[order[j]]+=m;
					cost=cost+m*min(front,order[j]);
					if(ma[order[j]]==mb[order[j]]){
						order.erase(order.begin()+j);
					}
					if(ma[front]==mb[front]){
//						order.erase(order.begin());
						i++;goto kiran2;//break;
					}
				}		
			}
		}
	}
	kiran2:;
}
        cout<<cost<<"\n";
        kiran:; 
    }
    return 0;
}
