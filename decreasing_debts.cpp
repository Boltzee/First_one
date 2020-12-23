#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef long long ll; 

ll debt[100005];
vector<ll> ans1,ans2,ans3;

struct node{
	ll id,val;
	node(ll a,ll b)
	{
		id = a;
		val = b;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	queue<node> q1,q2;
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		ll x,y,v;
		cin >> x >> y >> v;
		debt[x] += v;
		debt[y] -= v;
	}
	for (int i = 1; i <= n; i++)
	{
		if( debt[i] > 0 ) q1.push(node(i,debt[i]));
		else if( debt[i] < 0 ) q2.push(node(i,-debt[i]));
	}
	ll t1 = 0,t2 = 0;
	int id1,id2;
	while( !q1.empty() || t1 != 0 )
	{
		if( t1 == 0 )
		{
 			t1 = q1.front().val;
			id1 = q1.front().id;
			q1.pop(); 
		}
		if( t2 == 0 )
		{
			t2 = q2.front().val;
			id2 = q2.front().id;
			q2.pop();
		}
		ans1.push_back(id1);
		ans2.push_back(id2);
		ll z = min(t1,t2);
		ans3.push_back(z);
		t1 -= z;
		t2 -= z;
	}
	cout << ans1.size() << '\n';
	for (int i = 0; i < ans1.size(); i++)
	{
		cout << ans1[i] << ' ' << ans2[i] << ' ' << ans3[i] << '\n';
	}
	return 0;
}

