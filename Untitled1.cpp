#include<iostream>
#include<vector>
#include<utility>
#include<math.h>
#include<algorithm>
#include<iomanip>
using namespace std;
bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.first < j.first;
}

int main()
{
	vector <pair<int,int> > vec;
	int n,s,sum;
	cout<<setprecision(8)<<showpoint;
	cin>>n>>s;
	sum=s;
	for(int i=0;i<n;i++){
		int x,y,p;
		cin>>x>>y>>p;
		vec.push_back(make_pair((x*x+y*y),p));
		sum=sum+p;
	}
	sort(vec.begin(),vec.end(),compare);
	if(sum>=1000000){
		if(sum==1000000){
			double f=vec[vec.size()-1].first,r;
			r=pow(vec[vec.size()-1].first,0.5);
			cout<<r<<"\n";
			vec.clear();
		}
		else{
			int j=0;
			sum=s;
			while(sum<1000000){
				sum=sum+vec[j].second;
				j++;
			}
			double f=vec[j-1].first,r;
			r=pow(vec[j-1].first,0.5);
			cout<<r<<"\n";
			vec.clear();
		}
	}
	else{
		cout<<"-1"<<"\n";
		vec.clear();
	}
	return 0;
}
