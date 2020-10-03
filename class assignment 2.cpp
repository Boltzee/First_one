#include<iostream>
using namespace std;
class time
{
	public:
		void settime(int a,int b,int c){
			hr=a;
			min=b;
			sec=c;
		}
		void print(){
			cout<<hr<<":"<<min<<":"<<sec<<"\n";
		}
	private:
		int sec,hr,min;
};
int main()
{
	time x;
	x.settime(3,45,10);  
	x.hr=0;        // accidental code change made by the user so 
	               // the compiler now raises an error since
	               // member is now private so the user has no access.
	x.print();     
	return 0;      // no data inconsistency as the data
}
