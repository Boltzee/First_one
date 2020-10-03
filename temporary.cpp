#include<bits/stdc++.h>
using namespace std;
int value[3005];

int function(int unique){
	 int result=1;
	 result= unique * (unique-1) * (unique-2);
	 result= result/6;
	 return result;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n,c,k;
		cin>>n>>c>>k;
		if(n<3){
			cout<<"0\n";continue;
		}
		bool instinct=false;
		vector <int> vec[c+1];
		for(int i=0;i<n;i++){
			int x,y,z;cin>>x>>y>>z;
			vec[z].push_back(x);
		}
        for(int i=0;i<c;i++){
        	cin>>value[i+1];
        }
        int num=0;
        int count=0;int count1=0;
        vector <pair <int , int > > pos;
        for(int i=1;i<c+1;i++){
            if(vec[i].size()<3) count++;
            if(k<value[i]) count1++;
        	//sort(vec[i].begin(),vec[i].end());
        	pos.push_back(make_pair(vec[i].size(),i));
            num+= function(vec[i].size());
        }
        if(count==c || count1==c){
        	cout<<"0\n";continue;
        }
//        cout<<num<<"\n";
        sort(pos.begin(),pos.end());
        for(int i=pos.size()-1;i>=0 && k>=0;i--){
        	int element= pos[i].second;
//        	cout<<"element is "<<element<<"\n";
        	if(value[element]==0){
//        		cout<<"fgh\n";
        		num= num-function(pos[i].first);
        		continue;
        	}
            int times = k/value[element];
//            cout<<"times is "<<times<<"\n";
            if(times>=pos[i].first){
//            	cout<<function(pos[i].first)<<"\n";
            	num= num- function(pos[i].first);
            	k= k- pos[i].first * value[element];
            }
            else{
            	int diff= function(pos[i].first)-function(pos[i].first-times);
//            	cout<<function(pos[i].first)-function(pos[i].first-times)<<" "<<value[element]<<"hf\n";
            	num= num-diff;
            	k= k- times*value[element];
//            	cout<<"the k is "<<k<<"\n";
            }
        }
        cout<<num<<"\n";
	}
	return 0;
}
