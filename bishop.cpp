#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		vector <pair<int,int> > vec;
		vec.push_back(make_pair(8,2));
		vec.push_back(make_pair(7,1));
		vec.push_back(make_pair(6,2));
		vec.push_back(make_pair(5,1));
		vec.push_back(make_pair(8,4));
		vec.push_back(make_pair(7,3));
		vec.push_back(make_pair(6,4));
		vec.push_back(make_pair(8,6));
		vec.push_back(make_pair(3,1));
		vec.push_back(make_pair(2,2));
		vec.push_back(make_pair(1,1));
		vec.push_back(make_pair(8,8));
		vec.push_back(make_pair(2,2));
		vec.push_back(make_pair(1,3));
		vec.push_back(make_pair(6,8));
		vec.push_back(make_pair(2,4));
		vec.push_back(make_pair(1,5));
		vec.push_back(make_pair(4,8));
		vec.push_back(make_pair(2,6));
		vec.push_back(make_pair(1,7));
		vec.push_back(make_pair(2,8));
		int l=20;
		int x,y,a,b;
		cin>>x>>y;
		if(x!=2 && y!=8){
			if(x+y!=10 && y-x!=6)
			{
				l=l+2;
				a=5+(x-y)/2;
				b=5-(x-y)/2;
				vec.push_back(make_pair(a,b));
				goto kiran;
			}
			else{
				l=l+1;
				goto kiran;
			}
		}
		else{
			vec.pop_back();
			goto kiran;
		}
		kiran:
			cout<<l<<"\n";
			for(int i=vec.size()-1;i>=0;i--){
				cout<<vec[i].first<<" "<<vec[i].second<<"\n";
			}
			vec.clear();
	}
	return 0;
}
