#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;
typedef long long int lld;
int main()
{
	int n,m,a,b,count,j=0;
	lld c,amount=0;
	bool q,w;
	vector <int > vec[5];
	vector <pair<int,lld> > cap;
	vector <int> memb;
	vector <lld> sum;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>c;
		cap.push_back(make_pair(i,c));
		memb.push_back(i);
	}
	for(int i=0;i<m;i++){
		cin>>a>>b;
		count=0;
		if(i==0){
			vec[j].push_back(a);
			vec[j].push_back(b);
			memb.erase(memb.begin()+a-1);
			memb.erase(memb.begin()+b-1);
			j++;
		}
		else{
			for(int d=0;d<j;d++){
				q=binary_search(vec[d].begin(),vec[d].end(),a);
				w=binary_search(vec[d].begin(),vec[d].end(),b);
				if(q^w){
					if(q){
						vec[d].push_back(b);
						memb.erase(memb.begin()+b-1);
					}
					else{
						vec[d].push_back(a);
						memb.erase(memb.begin()+a-1);
					}
				}
				else if(!(q&w)){
					count++;
				}
				else{
					continue;
				}
			}
			if(count==j){
				vec[j].push_back(a);
			    vec[j].push_back(b);
			    memb.erase(memb.begin()+a-1);
			    memb.erase(memb.begin()+b-1);
			    j++;
			}
		}
	}
	for(int i=0;i<j;i++){
		for(int m=0;m<vec[i].size();m++){
			sum.push_back(cap[vec[i][m]-1].second);
		}
		sort(sum.begin(),sum.end());
		amount=amount+sum[0];
		sum.clear();
	}
	if(memb.size()!=0){
		for(int i=0;i<memb.size();i++){
			amount=amount+cap[memb[i]].second;
		}
	}
	cout<<amount<<"\n";
    return 0;
}
