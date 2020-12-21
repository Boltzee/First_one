#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
#define MOD 1000000007
#define uniq(a) a.resize(distance(a.begin(),unique(all(a))));

int binPow(int a, int n) {
    int res = 1;
    while (n) {
        if (n & 1)
            res = (1LL * res * a) % MOD;
        a = (1LL * a * a) % MOD;

        n >>= 1;
    }
    return res;
}

int C(int n, int k, const vector <long long> &fact, const vector <long long> &inv) {
    if (k > n) return 0;
    cout<<fact[n]<<" "<<inv[k]<<" "<<inv[n-k]<<"\n";
    int multiply = (1LL * fact[n] * inv[k]) % MOD;
    cout<<multiply<<"\n";
    multiply = (1LL * multiply * inv[n - k]) % MOD;
    cout<<multiply<<"\n";
    return multiply;
}


int main(){
    int n,x,pos;
    cin>>n>>x>>pos;
    vector <int> vec;
    int left=0,right=n;
    while(left<right){
        int middle= (left+right)/2;
        if(middle<=pos){
            left=middle+1; vec.push_back(middle);
        }
        else {right=middle; vec.push_back(right); }
    }
    vec.push_back(left-1);
    sort(vec.begin(),vec.end());
    uniq(vec);
    int ff= x-1,la=n-x;
    long long int ans=1;
    int count_1=0,count_2=0;
    for(auto x:vec){
        // cout<<"teh value of x is"<<x<<"\n";
        if(x<pos){
            count_1++;
        }
        else if(x>pos){
            count_2++;
        }
    }
    // cout<<"the value of count1 and count_2 are "<<count_1<<" "<<count_2<<"\n";
    vector <long long> fact(n + 1, 1LL);
    vector <long long> inv(n + 1, 1LL);
    for (int i = 1; i <= n; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
        inv[i] = binPow(fact[i], MOD - 2);
    }
    // std::vector<int > v(10,1LL);
    // for(auto x:v) cout<<x<<" ";
    int temp1= C(3,2,fact,inv);
    cout<<temp1<<"\n";
    int temp2=0; //C(la,count_2,fact,inv);
    temp1 = (1LL * temp1 * fact[count_1]) % MOD;
    temp2 = (1LL * temp2 * fact[count_2]) % MOD;
    int multiply = (1LL * temp2 * temp1) % MOD;
    multiply = (1LL * multiply * fact[n-count_1-count_2-1]) % MOD;
    // cout<<multiply<<"\n"; 
    return 0;
}