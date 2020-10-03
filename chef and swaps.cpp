#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main() {

	cout<<"THIS GAME IS VERY INTERESTING \n"<< " SO THIS IS TWO PLAYER GAME IN THIS GAME THERE ARE SIXTEEN UNSEEN CARDS REPRESENT AS 4*4 DIMENSIONS ";
	cout<<" EACH PALYER SELECT A CARD AND ENTERING THE X & Y COORDINATES OF CARD AND THAT CARD WILL TURN IF THIS CARD IS SAME AS ANY SEEN CARDS THE  ";
	cout<<" PLAYER GETS A POINT AND GET ONE MORE CHANCE AND ALL THE MATCH CARDS WILL REPRESENTED BY '9' AT LAST THE PLAYER WITH HIGHER POINTS WIN  \n\n";
	cout<<"RULES OF GAME : \n";
	cout<<" SEEN CARDS CANNOT BE SELECTED AGAIN \n";
	vector<int> v{1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8};
	int p=0,point1=0,point2=0,d=0,x,y;
	vector<int> v1;
	vector<int> x1;
	vector<int> y1;
	int a[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			a[i][j]=0; 
		}
	}
	while(p!=16)
	{
		cout<<"  "<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
		for(int i=0;i<4;i++)
		{
			cout<<i+1<<" ";
			for(int j=0;j<4;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		q:;
		cout<<"PLEASE ENTER X & Y  PLAYER-1 :";
		cin>>x>>y;
		srand((unsigned)time(0)); 
    	int r,s,c;
    	auto it=v.begin();
    	d=0;
    	r = (rand()%v.size())+1;
    	 it=v.begin()+r-1;
    	 c= *it;
    	a[x-1][y-1]= c;
    	v.erase(it);
    	cout<<"  "<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
		for(int i=0;i<4;i++)
		{
			cout<<i+1<<" ";
			for(int j=0;j<4;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		if(v1.size()!=0){
			for(int i=0;i<v1.size();i++)
			{
				if(a[x-1][y-1]==v1[i]){d++; s=i;}
			}
		}
		if(d>0)
		{
			point1++; cout<<"HURRAY! PLAYER-1 GOT IT \n"; v1.erase(v.begin()+s); 
			a[x1[s]][y1[s]]=9; a[x-1][y-1]=9; x1.erase(x1.begin()+s); y1.erase(y1.begin()+s); goto q;
		}
		else
		{
				v1.push_back(a[x-1][y-1]);
		x1.push_back(x-1);
		y1.push_back(y-1);
		}
		q1:;
			cout<<"PLEASE ENTER X & Y  PLAYER-2 :";
			cin>>x>>y;
		d=0;
		srand((unsigned)time(0)); 

    	r = (rand()%v.size())+1;
    	 it=v.begin()+r-1;
    	a[x-1][y-1]=v[r-1];
    	v.erase(it);
    	cout<<"  "<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
		for(int i=0;i<4;i++)
		{
			cout<<i+1<<" ";
			for(int j=0;j<4;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		//cout<<"h";
		if(v1.size()!=0){
    	for(int i=0;i<v1.size();i++)
			{
				if(a[x-1][y-1]==v1[i]){d++; s=i;}
			}
		}
		if(d>0)
		{
			point2++; v1.erase(v1.begin()+s); a[x1[s]][y1[s]]=9; a[x-1][y-1]=9; 
			 x1.erase(x1.begin()+s); y1.erase(y1.begin()+s); cout<<"HURRAY! PLAYER-2 GOT IT \n";goto q1;
		}
		else
		{
				v1.push_back(a[x-1][y-1]);
		x1.push_back(x-1);
		y1.push_back(y-1);
		}
		p++;
	}
	cout<<"FINAL SCORE OF PLAYER-1 :"<<point1<<endl;
		cout<<"FINAL SCORE OF PLAYER-2 :"<<point2<<endl;
		if(point1>point2 ?  cout<<"PLAYER-1 WON":cout<<"PLAYER-2 WON");
		else if(point2==point1){cout<<"OOPS GAME DRAWS" ;}
	return 0;
}