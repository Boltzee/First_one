#include<bits/stdc++.h>
using namespace std;
#define sum(vec) accumulate(vec.begin(),vec.end(),0);

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,m;cin>>n>>m;
	string s;cin>>s;
	vector <int> vec;
	int count=0;
	int index[n]={0};
//	int input_index[n];
//	char input_char[n];
//	for(int i=0;i<m;i++){
//		cin>>input_index[i]>>input_char[i];
//	}
	for(int i=0;i<s.length()-1;i++){
		if(s[i]=='.' && s[i+1]=='.'){
//			cout<<"the index is "<<i<<"\n";
			count++;
		}
		else{
			vec.push_back(count);
			count=0;
		}
		if(s[i]=='.' && s[i+1]=='.' && s[i-1]=='.' && i>0 ){
			index[i]=2;
		}
		else if(s[i]=='.' && s[i+1]=='.' && i>0 ) index[i]=1;
		else if(s[i]=='.' && s[i-1]=='.' && i>0 ) index[i]=1;
		else if(i==0 && s[i]=='.' && s[i+1]=='.') index[i]=1;
	}
	vec.push_back(count);
	if(s[s.length()-1]=='.' && s[s.length()-2]=='.') index[s.length()-1]=1;
	int tot=sum(vec);
//	cout<<"the value of tot is "<<tot<<"\n";
	int pos;
	char c;
	for(int k=0;k<m;k++){
//		cout<<"the loop start is "<<k<<"\n";
//		pos= input_index[k];c=input_char
		cin>>pos>>c;
		pos=pos-1;
		if(pos==0 || pos==s.length()-1){
			if(pos==0){
				if(c=='.' && s[0]!='.'){
					if(s[1]=='.'){
						tot++;index[0]=1;index[1]++;
					}
				}
				else if(c!='.' && s[0]=='.'){
					if(s[1]=='.'){
						tot--;index[0]=0;index[1]--;
					}
				}
				s[0]=c;
			}
			else{
				if(c=='.' && s[s.length()-1]!='.'){
					if(s[s.length()-2]=='.'){
						tot++;index[s.length()-1]=1;index[s.length()-2]++;
					}
				}
				else if(c!='.' && s[s.length()-1]=='.'){
					if(s[s.length()-2]=='.'){
						tot--;index[s.length()-1]=0;index[s.length()-2]--;
					}
				}
				s[s.length()-1]=c;
			}
		}
		else{
			if(c=='.' && s[pos]!='.'){
				if(s[pos+1]=='.'){
					tot++;index[pos]++;index[pos+1]++;
				}
				if(s[pos-1]=='.'){
					tot++;index[pos]++;index[pos-1]++;
				}
			}
			else if(c!='.' && s[pos]=='.'){
				if(s[pos+1]=='.'){
					tot--;index[pos]--;index[pos+1]--;
				}
				if(s[pos-1]=='.'){
					tot--;index[pos]--;index[pos-1]--;
				}
			}
			s[pos]=c;
		}
		cout<<tot<<"\n";
	}
	return 0;
}
