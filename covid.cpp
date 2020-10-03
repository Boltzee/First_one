#include<iostream>
//#include<math.h>
#include<vector>

using namespace std;

bool kfactors(int n, int k) 
{ 
    // A vector to store all prime factors of n 
    vector<int> P; 
  
    // Insert all 2's in vector 
    while (n%2 == 0) 
    { 
        P.push_back(2); 
        n /= 2; 
    } 
  
    // n must be odd at this point 
    // So we skip one element (i = i + 2) 
    for (int i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            P.push_back(i); 
        } 
    } 
  
    // This is to handle when n > 2 and 
    // n is prime 
    if (n > 2) 
        P.push_back(n); 
  
    // If size(P) < k, k factors are not possible 
    if (P.size() < k) 
    { 
//        cout << "-1" << endl; 
        return false; 
    }
	else{
		return true;
	} 
} 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		long long int x,k;
		cin>>x>>k;
		if(k==1){
			if(x!=1)
			  cout<<"1\n";
			else
			  cout<<"0\n";
		}
		else if(k>29){
			cout<<"0"<<"\n";
		}
		else{
			bool found=kfactors(x,k);
			if(found){
				cout<<"1"<<"\n";
			}
			else{
				cout<<"0"<<"\n";
			}
		}
	}
	return 0;
}
