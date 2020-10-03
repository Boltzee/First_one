#include<bits/stdc++.h>
using namespace std;

vector <string> vec1,vec2;
int countfreq(string &pat, string &txt) 
{ 
	int M = pat.length(); 
	int N = txt.length(); 
	int res = 0; 
	
	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) 
	{ 
		/* For current index i, check for 
		pattern match */
		int j; 
		for (j = 0; j < M; j++) 
			if (txt[i+j] != pat[j]) 
				break; 

		// if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
		if (j == M) 
		{ 
		res++; 
		j = 0; 
		} 
	} 
	return res; 
} 

void substring(string f, int q, vector <string> &vec)  
{ 
    for (int i = 0; i < q; i++){
        for (int len = 1; len <= q - i; len++) {
			vec.push_back(f.substr(i,len));
	    }
     }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		string a,b;
		cin>>a>>b;
		int n;cin>>n;
		string s[10];int B[10];
		for(int i=0;i<n;i++){
			cin>>s[i]>>B[i];
		}
		substring(a,a.length(),vec1);
		substring(b,b.length(),vec2);
		int temp=0;
		for(int i=0;i<vec1.size();i++){
			for(int m=0;m<vec2.size();m++){
				int plea1=0,plea2=0,plea3=0;
				string sq=vec1[i]+vec2[m];
				for(int x=0;x<n;x++){
					plea1=plea1+countfreq(s[x],vec1[i])*B[x];
					plea2=plea2+countfreq(s[x],vec2[m])*B[x];
					plea3=plea3+countfreq(s[x],sq)*B[x];
				}
				if(max(max(plea1,plea2),plea3)>temp){
					temp=max(max(plea1,plea2),plea3);
				}
			}
		}
		cout<<temp<<"\n";
		vec1.clear();vec2.clear();
	}
	return 0;
}
