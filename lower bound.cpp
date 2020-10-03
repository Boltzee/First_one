// C++ code to demonstrate the working of lower_bound() 
#include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// initializing vector of integers 
	// for single occurrence 
	vector<int> arr1 ;
	arr1.push_back(10);
	arr1.push_back(15);
	arr1.push_back(20);
	arr1.push_back(25);
	arr1.push_back(30);
	arr1.push_back(35); 
	
	// initializing vector of integers 
	// for multiple occurrences 
	vector<int> arr2 ; 
	arr2.push_back(10);
	arr2.push_back(15);
	arr2.push_back(20);
	arr2.push_back(20);
	arr2.push_back(25);
	arr2.push_back(30);
	arr2.push_back(35);
	// initializing vector of integers 
	// for no occurrence 
	vector<int> arr3 ;	 
	arr3.push_back(10);
	arr3.push_back(15);
//	arr1.push_back(20);
	arr3.push_back(25);
	arr3.push_back(30);
	arr3.push_back(35);
	// using lower_bound() to check if 20 exists 
	// single occurrence 
	// prints 2 
	cout << "The position of 20 using lower_bound "
			" (in single occurrence case) : "; 
	cout << lower_bound(arr1.begin(), arr1.end(), 20); 
			 
	
	cout << endl; 
	
	// using lower_bound() to check if 20 exists 
	// multiple occurrence 
	// prints 2 
	cout << "The position of 20 using lower_bound "
			"(in multiple occurrence case) : "; 
	cout << lower_bound(arr2.begin(), arr2.end(), 20) 
			- arr2.begin(); 
	
	cout << endl; 
	
	// using lower_bound() to check if 20 exists 
	// no occurrence 
	// prints 2 ( index of next higher) 
	cout << "The position of 20 using lower_bound "
			"(in no occurrence case) : "; 
	cout << lower_bound(arr3.begin(), arr3.end(), 20) 
			- arr3.begin(); 
	
	cout << endl;	 
} 

