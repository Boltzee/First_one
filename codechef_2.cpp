#include<bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	char ans_array[17];
	for(int i=0;i<16;i++){
		ans_array[i]= 'a'+i;
	}
	// for(int i=0;i<16;i++) cout<<ans_array[i]<<" ";cout<<endl;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		int temp=0,j=0;
		std::vector<char> vec;
		for (int i = s.length()-1; i >=0 ; i--)
		{
			if(i%4==0){

				temp += (s[i]-'0')*pow(2,j%4);
				// cout<<"the value of temp is "<<temp<<"\n";
				vec.push_back(ans_array[temp]);
				temp=0;
			}
			else{
				temp+= (s[i]-'0')*pow(2,j%4);
			}
			j++;
		}
		for(int i=vec.size()-1;i>=0;i--){
			cout<<vec[i];
		}cout<<"\n";
	}
}