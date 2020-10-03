#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
	int n,m;
	cout<<setprecision(9);
	cin>>n>>m;
	vector<double> vec;
	for(int i=0;i<n;i++){
		double a,b,c;
		cin>>a>>b;
		c=(a/b)*m;
		vec.push_back(c);
	}
	sort(vec.begin(),vec.end());
//	cout<<setprecision(8)<<showpoint();
	cout<<vec[0];
	return 0;
}
