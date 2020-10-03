#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(a) a.begin(),a.end()
#define uniq(a) a.resize(distance(a.begin(),unique(all(a))));
#define sortvec(a) sort(all(a));
#define even(a) (!(a&1))
int agb[100000],bga[100000]; 

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
        sortvec(order);
        uniq(order);
        long long int cost=0;
        int ita=0,itb=0;
        for(int i=0;i<order.size();i++){
           long long int x=order[i];
           if(ma[x]>mb[x]){
              agb[ita]=x;ita++;
            }
           else if(ma[x]<mb[x]){
              bga[itb]=x;itb++;
            }
        }
        while(!order.empty()){
          long long int front=order.front();
          int diff1=ma[front]-mb[front];
          if(even(ma[front]+mb[front])){
                if(ma[front]!=mb[front]){
                   if(ma[front]>mb[front]){
                      int num=(diff1)/2;
                      long long int element=bga[itb-1];
                      if(!even(ma[element]+mb[element])){
                      	cout<<"-1\n";goto kiran;
					  }
                      int num2=(mb[element]-ma[element])/2;
                      int k=min(num,num2);
                      ma[front]-=k;mb[front]+=k;
                      ma[element]+=k;mb[element]-=k;
                      if(ma[front]==mb[front]){
                      	order.erase(order.begin());
					  }
                      if(ma[element]==mb[element]){
                      	order.erase(lower_bound(all(order),element));
                        itb--;}
                      cost=cost+k*min(front,element);
                   }
                   else{
                      int num=(-1*diff1)/2;
                      long long int element=agb[ita-1];
                      if(!even(ma[element]+mb[element])){
                      	cout<<"-1\n";goto kiran;
					  }
                      int num2=(ma[element]-mb[element])/2;
                      int k=min(num,num2);
                      ma[front]+=k;mb[front]-=k;
                      ma[element]-=k;mb[element]+=k;
                      if(ma[front]==mb[front]){
                      	order.erase(order.begin());
					  }
                      if(ma[element]==mb[element]){
                      	 order.erase(lower_bound(all(order),element));
                         ita--;}
                      cost=cost+k*min(front,element);
                   }
                }    
                else{
                  order.erase(order.begin());
                }
           }
           else{
             cout<<"-1\n";goto kiran;
           }
        }
        cout<<cost<<"\n";
        kiran:; 
    }
    return 0;
}
