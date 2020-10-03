#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		int n,q;
		float r;
		cin>>n>>q;
		float a[100001];
		for(int i=1;i<=n;i++)
		{
			cin>>r;
			a[i]=r/10000;
		}
		while(q--)
		{
			int x1,x2;
			float y;
			cin>>x1>>x2>>y;
			y=y/10000;
			int count=0;
			for(int i=x1;i<x2;i++)
			{
				if((a[i+1]-y)*(a[i]-y)*10000<=0)
					count++;
				else
					continue;	
			}
			cout<<count<<"\n";
		}
	}
	return 0;
}
