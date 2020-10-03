#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int n;

void add_edge(vector <int> vec[],int x,int y){
	vec[x].pb(y);
	vec[y].pb(x);
}

//bool visited[100005]={false};
bool result[100005]={true};
void initialize(){
	for(int i=1;i<=n;i++) result[i]=true;
}
int people[100005];
long long int value[100005];
long long int calculated[100005];
long long int parent[100005];
long long int goodness[100005];


void function1(int index, vector <int> vec[]){
       value[index]=people[index];
//       visited[index]=true;
       for(int i=0;i<vec[index].size();i++){
           if(vec[index][i]!=parent[index]){
           	    parent[vec[index][i]]=index;
                function1(vec[index][i], vec);
                value[index]+=value[vec[index][i]];
           }
//           else if(vec[index][i]!=parent[index]){
//                value[index]+=value[vec[index][i]];
//           }
       }
       if ((value[index] + calculated[index]) % 2 == 0) {} // first
       else result[index] = false;
       goodness[index] = (value[index] + calculated[index]) / 2;
       if (goodness[index] >= 0 && goodness[index] <= value[index]) {} // second
       else result[index] = false;
       long long int sum=0;
       	   for(int i=0;i<vec[index].size();i++){
       	   	  if(vec[index][i]!=parent[index])  sum+=goodness[vec[index][i]];
			}
       if (sum <= goodness[index]) {} // third
       else result[index] = false;
//       goodness[index]=(value[index]+calculated[index])/2;
//       if(((value[index]+calculated[index])%2)==0){
//       	   
//       	   if(goodness[index]>value[index]) result[index]=false;
//       	   else{
//       	   long long int sum=0;
//       	   for(int i=0;i<vec[index].size();i++){
//       	   	  if(vec[index][i]!=parent[index])sum+=goodness[vec[index][i]];
//			}
//			if(sum>goodness[index]) result[index]=false;
//			else result[index]=true;}
//	   }
//	   else{
//	   	result[index]=false;
//	   } 
//       cout<<"the value of funtion at index "<<index<<" is "<<value[index]<<"\n";
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		
		parent[1]=-1;
        int m;
        cin>>n>>m;
        initialize();
//        for(int i=1;i<=n;i++) cout<<visited[i]<<" ";
//        cout<<"\n";
        //int people[n+1];
        for(int i=1;i<=n;i++){
           cin>>people[i];
        }
        
        for(int i=1;i<=n;i++){
           cin>>calculated[i];
        }
        vector <int> vec[n+1];
        for(int i=0;i<n-1;i++){
           int x,y;cin>>x>>y;
           add_edge(vec,x,y);
        }	
        //bool visited[n+1]={false};
        //long long int value[n+1];
        //stack <int> s;
        function1(1,vec);
//        for(auto i=1;i<=n;i++) cout<<goodness[i]<<" "<<result[i]<<"\n";
//		cout<<"\n"; 
        bool instinct=true;
        for(int i=1;i<=n;i++){
        	if(!result[i]){
        		instinct=false;
			}
		}
        if(instinct){
           cout<<"YES\n";
        }
        else{
           cout<<"NO\n";
        }
	}
	return 0;
}
