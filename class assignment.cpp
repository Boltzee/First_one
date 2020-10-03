#include<iostream>
using namespace std;
class time
{
	public:
		int sec,hr,min;
		void settime(int a,int b,int c){
			hr=a;
			min=b;
			sec=c;
		}
		void print(){
			cout<<hr<<":"<<min<<":"<<sec<<"\n";
		}
};
int main()
{
	time x;
	x.settime(3,45,10);  
	x.hr=0;        // accidental code change made by the user
	x.print();     // data inconsistency as the expected result was
	return 0;      // 3:45:10 but got 0:45:10
}
