#include<bits/stdc++.h>
using namespace std;
#define num 200005

vector <int> vec[num];
int outdegree[num]={0};
int visited[num]={false};

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n;cin>>n;
	vector <pair<int,int> > ind;
    for(int i=0;i<n-1;i++){
    	int x,y;
    	cin>>x>>y;
    	vec[x].push_back(y);
    	vec[y].push_back(-1*x);
    	outdegree[x]++;
    }
    for(int i=1;i<n+1;i++){
    	ind.push_back(make_pair(outdegree[i],i));
    }
    sort(ind.begin(),ind.end());
    // int max= ind[ind.size()-1].first;
    int temp_min=INT_MAX;
    vector <pair<int,int> > count1;
    for(int i=ind.size()-1;i>=0;i--) if(ind[i].first>0) {
    	int index= ind[i].second;
        
        for(int i=0;i<n+1;i++){
        	visited[i]=false;
        }
        stack <int> s;
        visited[index]=true;
        s.push(index);
        int count=0;
        while(!s.empty()){
        	int element= abs(s.top());
        	s.pop();
        	for(int j=0;j<vec[element].size();j++){
        		if(!visited[abs(vec[element][j])]){
        			visited[abs(vec[element][j])]=true;
        			if(vec[element][j]<0) count++;
        			s.push(vec[element][j]);  
        		}
        	}
        }
        if(count<=temp_min){
        	temp_min=count;
        	count1.push_back(make_pair(count,index));
        }
    }
    sort(count1.begin(),count1.end());
    cout<<temp_min<<"\n";
    for(int i=0;i<count1.size();i++){
    	if(count1[i].first==temp_min){
    		cout<<count1[i].second<<" ";
    	}
    }
    cout<<"\n";
    return 0;
}