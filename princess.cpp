#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	vector <int> king,cont;
	vector <vector<int> > vec;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int temp[n],min,count=0,a[n],j=0,z=0;
		for(int i=0;i<n;i++){
			king.push_back(i+1);
		}
		for(int i=0;i<n;i++){
			int k,l;
			cin>>k;
			for(int m=0;m<k;m++){
				cin>>l;
				cont.push_back(l);
			}
			vec.push_back(cont);
			if(i==0){
				temp[z]=(vec[i][0]);z++;
				king.erase(king.begin()+vec[i][0]-1);
				count++;
			}
			else{
				min=vec[i][0];
				if(binary_search(temp,temp+z,min)==0){
					temp[z]=(vec[i][0]);z++;
					king.erase(king.begin()+vec[i][0]-1);
					count++;
				}
				else{
					a[j]=i;j++;
				}
			}
			cont.clear();
		}
		int flag=0;
		if(count!=n && king.size()!=0){
			for(int i=0;i<j;i++){
				if(vec[a[i]].size()!=n){
					cout<<"IMPROVE"<<"\n";
					cout<<a[i]+1<<" "<<king[0];
					flag=1;break;
				}
			}
			if(flag==0){
				cout<<"OPTIMAL\n";
			}
		}
		else{
			cout<<"OPTIMAL"<<"\n";
		}
		king.clear();
		for(int i=0;i<n;i++){
		  vec[i].clear();}
	}
	return 0;
}
