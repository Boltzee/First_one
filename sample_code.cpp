#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << 2*((n+1)/2)*((n+1)/2)+2*((n+1)/2)+(n%4==0) << endl;
}
