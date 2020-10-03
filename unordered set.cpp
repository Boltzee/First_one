#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define all(a) a.begin(),a.end()
#define uniq(a) a.resize(distance(a.begin(),unique(all(a))));


int main()
{
  unordered_multiset <int> s;
  for(int i=0;i<10;i++){
  	s.insert(i%5);
  }
  cout<<s.count(1);
  return 0;
}

