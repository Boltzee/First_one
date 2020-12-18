    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int T;
    	cin>>T;
    	while(T--)
    	{
    	    int n,k,ans=0,c=0,d=0,j=0,x=0,y=0;
    	    cin>>n>>k;
    	    string a;
    	    cin>>a;
    	    vector<int> v;
    	    for(int i=0;i<n;i++)
    	    {
    	        if(a[i]=='L')
    	        {
    	            x++;
    	        }
    	        else
    	        {
    	            break;
    	        }
    	    }
    	    if(x==n)
    	    {
    	        if(k>0)
    	        {
    	            ans+=2*k-1;
    	        }
    	        cout<<ans<<endl;
    	        continue;
    	    }
    	    //x--;
    	    for(int i=n-1;i>=0;i--)
    	    {
    	        if(a[i]=='L')
    	        {
    	            y++;
    	        }
    	        else
    	        {
    	            break;
    	        }
    	    }
    	    for(int i=0;i<n;i++)
    	    {
    	        if(i==0 && a[i]=='W')
    	        {
    	            ans+=1;
    	        }
    	        else if(a[i]=='W' && a[i-1]=='W')
    	        {
    	            ans+=2;
    	        }
    	        else if(a[i]=='W' && a[i-1]=='L')
    	        {
    	            ans+=1;
    	        }
    	    }
    	    for(int i=0;i<n;i++)
    	    {
    	        if(a[i]=='W')
    	        {
    	            if(c!=0)
    	            {
    	                v.push_back(c);
    	                j++;
    	            }
    	            c=0;
    	            d=1;
    	        }
    	        else if(a[i]=='L' && d==1)
    	        {
    	            c++;
    	        }
    	    }
    	    if(j>0)
    	    {
    	        sort(v.begin(),v.end());
    	        for(int i=0;i<j;i++)
        	    {
        	        if(k<=0)
        	        {
        	            break;
        	        }
        	        else if(k>=v[i])
        	        {
        	            ans+=2*v[i]+1;
        	            k-=v[i];
        	        }
        	        else if(k<v[i] && k>0)
        	        {
        	            ans+=2*k;
        	            k=0;
        	        }
        	    }
    	    }
    	    
    	    if(k>0)
    	    {
    	        if(y>0)
    	        {
    	            if(k<y)
    	            {
    	                ans+=2*k;
    	                k=0;
    	            }
    	            else
    	            {
    	                ans+=2*y;
    	                k=k-y;
    	            }
    	        }
    	    }
    	    if(k>0)
    	    {
    	        if(x>0)
    	        {
    	            if(k<x)
    	            {
    	                ans+=2*k;
    	                k=0;
    	            }
    	            else
    	            {
    	                ans+=2*x;
    	                k=k-x;
    	            }
    	        }
    	    }
    	   // if(k>0 && x>=0)
    	   // {
    	   //     ans+=1;
    	   // }
    	    cout<<ans<<endl;
    	}
    	return 0;
    }
