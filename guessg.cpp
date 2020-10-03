#include<iostream>
using namespace std;
#define check(a) if(a=='E'){_Exit(0);}
char resp;

void call_false(long long int& ,long long int& ,int&);

void call_true(long long int &first, long long int &last, int &k){
	if(k==0 || first<last) _Exit(0);
	if(first==last){
		k--;
		cout<<first<<endl;
		cin>>resp;
		check(resp);
		_Exit(10);
	}
    last=last-1;
    cout<<last<<endl;
    cin>>resp;k--;
    check(resp);
    if(resp=='L') call_true(first,last,k);
    else call_false(first,last,k);
}

void call_false(long long int &first, long long int &last, int &k){
	if(k==0 || first<last) _Exit(0);
	if(first==last){
		k--;
		cout<<first<<endl;
		cin>>resp;
		check(resp);
		_Exit(10);
	}
    long long int mid=(first+last)/2;
    k--;
    cout<<mid<<endl;
    cin>>resp;
    check(resp);
    if(resp=='L'){
    	last=mid-1;
    	k--;
        cout<<last<<endl;
        cin>>resp;
        check(resp);
        if(resp=='G') call_false(first,last,k);
        else call_true(first,last,k);
    }
    else{
    	first=mid+1;
    	k--;
    	cout<<first<<endl;
    	cin>>resp;
    	check(resp);
    	if(resp=='G'){
    		call_true(first,last,k);
    	}
    	else call_false(first,last,k);
    }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n;
  long long int first,last;
  char temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9;
  cin>>n;
  last=n;first=1;
  int k=300;
  // char resp;
  cout<<n<<endl;//1
  cin>>resp;k--;
  check(resp);
  cout<<n<<endl;//1
  cin>>temp1;k--;
  check(temp1);
  cout<<n<<endl;//1
  cin>>temp2;k--;
  check(temp2);
  cout<<n<<endl;//1
  cin>>temp3;k--;
  check(temp3);
  cout<<n<<endl;//1
  cin>>temp4;k--;
  check(temp4);
  cout<<n<<endl;//1
  cin>>temp5;k--;
  check(temp5);
  cout<<n<<endl;//1
  cin>>temp6;k--;
  check(temp6);
  cout<<n<<endl;//1
  cin>>temp7;k--;
  check(temp7);
  cout<<n<<endl;//1
  cin>>temp8;k--;
  check(temp8);
  cout<<n<<endl;//1
  cin>>temp9;k--;
  check(temp9);
  int count=10;
  if(resp==temp2 && temp2==temp4 && temp4==temp6 && temp6==temp8){
   int left=1,right=n;
        while(left<=right){
            count++;
            if(count%2==0){
                cout<<"1"<<endl;
                cin>>resp;continue;
            }
            int mid=(left+right)/2;
            cout<<mid<<endl;
            cin>>resp;
            check(resp);
            if(resp=='G'){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        cout<<left<<endl;
        cin>>resp;
        check(resp);   
  }
  else if(temp1==temp3 && temp3==temp5 && temp5==temp7 && temp7==temp9){
     int left=1,right=n;
        while(left<=right){
            count++;
            if(count%2==1){
                cout<<"1"<<endl;
                cin>>resp;continue;
            }
            int mid=(left+right)/2;
            cout<<mid<<endl;
            cin>>resp;
            check(resp);
            if(resp=='G'){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        cout<<left<<endl;
        cin>>resp;
        check(resp); 
  }
  else{
  // while(true){
  	if(resp=='L'){
        call_true(first,last,k);
  	}
  	else{
        call_false(first,last,k);
  	}
  // }
  }
  return 0;
}
