// created by mtnshh
 
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define ll long long
#define ld long double
 
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repb(i,a,b) for(ll i=a;i>=b;i--)
 
#define err() cout<<"--------------------------"<<endl; 
#define errA(A) for(auto i:A)   cout<<i<<" ";cout<<endl;
#define err1(a) cout<<#a<<" "<<a<<endl
#define err2(a,b) cout<<#a<<" "<<a<<" "<<#b<<" "<<b<<endl
#define err3(a,b,c) cout<<#a<<" "<<a<<" "<<#b<<" "<<b<<" "<<#c<<" "<<c<<endl
#define err4(a,b,c,d) cout<<#a<<" "<<a<<" "<<#b<<" "<<b<<" "<<#c<<" "<<c<<" "<<#d<<" "<<d<<endl

#define pb push_back
#define all(A)  A.begin(),A.end()
#define allr(A)    A.rbegin(),A.rend()
#define ft first
#define sd second
 
#define pll pair<ll,ll>
#define V vector<ll>
#define S set<ll>
#define VV vector<V>
#define Vpll vector<pll>
 
#define endl "\n"
 
const ll logN = 20;
const ll M = 1000000007;
const ll INF = 1e18;
#define PI 3.14159265
 
const ll N = 200005;

Vpll adj[N];
ll dp[N];

void dfs1(ll n, ll p){
    for(auto i: adj[n]){
        if(i.ft != p){
            dfs1(i.ft, n);
            if(i.sd == -1){
                dp[n] += 1;
            }
            dp[n] += dp[i.ft];
        }
    }
}

void dfs2(ll n, ll p, ll cnt){
    ll sum = 0;
    for(auto i: adj[n]){
        if(i.ft != p){
            ll have = dp[n] - dp[i.ft];
            if(i.sd == -1){
                have--;
            }
            else{
                have++;
            }
            dfs2(i.ft, n, cnt+have);
        }
    }
    dp[n] += cnt;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin >> n;
    rep(i,0,n-1){
        ll u, v;
        cin >> u >> v;
        adj[u].pb({v, 1});
        adj[v].pb({u, -1});
    }
    dfs1(1, 0);
    for(int i=1;i<n+1;i++){
    	cout<<dp[i]<<" ";
    }cout<<endl;
    dfs2(1, 0, 0);
    for(int i=1;i<n+1;i++){
    	cout<<dp[i]<<" ";
    }cout<<endl;
    ll ans = n;
    rep(i,1,n+1)    ans = min(ans, dp[i]);
    V v;
    rep(i,1,n+1){
        if(ans == dp[i])
            v.pb(i);
    }
    cout << ans << endl;
    errA(v);
    return 0;
}