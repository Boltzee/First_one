//#include<iostream>
//using namespace std;

// C++ implmentation to find the 
// Number of factors of very 
// large number N modulo M 

#include <bits/stdc++.h> 
using namespace std; 

#define ll long long 
ll mod = 1000000007; 

// Function for modular 
// multiplication 
ll mult(ll a, ll b) 
{ 
    cout<<mod<<"\n";
	return ((a % mod) * 
		(b % mod)) % mod; 
} 

// Funcion to find the number 
// of factors of large Number N 
ll calculate_factors(ll n) 
{ 
	ll ans, cnt; 
	cnt = 0; 
	ans = 1; 
	
	// Count the number of times 
	// 2 divides the number N 
	while (n % 2 == 0) { 
		cnt++; 
		n = n / 2; 
	} 
	
	// Condition to check 
	// if 2 divides it 
	if (cnt) { 
		ans = mult(ans, (cnt + 1)); 
	} 
	
	// Check for all the possible 
	// numbers that can divide it 
	for (int i = 3; i <= sqrt(n); 
						i += 2) { 
		cnt = 0; 
		
		// Loop to check the number 
		// of times prime number 
		// i divides it 
		while (n % i == 0) { 
			cnt++; 
			n = n / i; 
		} 
		
		// Condition to check if 
		// prime number i divides it 
		if (cnt) { 
			ans = mult(ans, (cnt + 1)); 
		} 
	} 
	// Condition to check if N 
	// at the end is a prime number. 
	if (n > 2) { 
		ans = mult(ans, (2)); 
	} 
	cout<<mod<<"\n";
	return ans % mod; 
} 

// Driver Code 
int main() 
{ 
	ll n = 1937485762394756387236; 
	ll g=n/2;
	mod = 17; 
    
	cout <<n<<" "<<mod<<" "<< calculate_factors(n) << endl; 

	return 0; 
} 


//int main()
//{
//	cout<<193748576239475639%1000000007;
//}
