#include<bits/stdc++.h>
#include<tuple>
using namespace std;

int main(){
	long long int n;
	cin>>n;cout<<fixed<<setprecision(4);
	vector <tuple<long long int,long long int> > vec;
	for(long long int i=0;i<n;i++){
		long long int x,y;cin>>x>>y;
		vec.push_back({x,y});
	}
    sort(vec.begin(),vec.end());
    long long int temp=1e9;
    for(long long int i=1;i<vec.size();i++){
    	if(get<0>(vec[i])==get<0>(vec[i-1]) && get<1>(vec[i])==get<1>(vec[i-1])){
    		cout<<"0.0000\n";return 0;
    	}
    	long long int diffx=get<0>(vec[i])-get<0>(vec[i-1]);
    	long long int diffy=get<1>(vec[i])-get<1>(vec[i-1]);
    	long long int tot=pow(diffx,2)+pow(diffy,2);
    	if(tot<temp){
    		temp=tot;
    	}
    }
    // long long intdis=pow(get<1>(vec[1])-get<1>(vec[0]),2)+pow(get<2>(vec[1])-get<2>(vec[0]),2);
    double dist=sqrt(temp);
    cout<<dist<<endl;
    return 0;
}