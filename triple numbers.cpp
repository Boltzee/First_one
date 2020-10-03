#include<iostream>
using namespace std;
#define check(a)  if(a=='E'){_Exit(0);}  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    char resp,temp,temp2;
    bool odd=false,even=false;
    cin>>n;
    cout<<"1"<<endl;
    cin>>temp;
    check(temp);
    cout<<"1"<<endl;
    cin>>resp;
    cout<<"1"<<endl;
    cin>>temp2;
    if(temp==temp2){
        odd=true;
    }
    else{
        even=true;
    }
    int count=3;
    if(odd){
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
    else{
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
    return 0;
}
