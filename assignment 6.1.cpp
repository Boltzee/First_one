#include<iostream>
#include<string.h>
using namespace std;

class publication{
	public:
		void getdata();
		void putdata();
		publication( string a="null", float p=0):s(a),price(p){}
		~publication(){}
	private:
		string s;
		float price;
};
void publication::getdata(){
	cout<<"Enter the name of the publication and its price:";
	cin>>s>>price;
}
void publication::putdata(){
	cout<<"The name of the publication and its price are:"<<s<<" "<<price<<"\n";
}
class book: public publication{
	public:
		void getdata(){
			publication::getdata();
			cout<<"Enter the number of pages in the book:";
			cin>>num_pages;
		}
		void putdata(){
			publication::putdata();
			cout<<"The number of pages in the book are:"<<num_pages<<"\n";
		}
		book():num_pages(0){};
		book(string a,float p,int x=0):publication(a,p),num_pages(x){}
		~book(){}
	private:
		int num_pages;
};
class tape: public publication{
	public:
		void getdata(){
			publication::getdata();
			cout<<"Enter the total playing time of the book:";
			cin>>time;
		}
		void putdata(){
			publication::putdata();
			cout<<"The total audio time of the book is:"<<time<<"\n";
		}
		tape():time(0){}
		tape(string a, float p, float t=0):publication(a,p),time(t){}
	private:
		float time;
};

int main()
{
	book y;
	tape z;
	y.getdata();
	z.getdata();
	y.putdata();cout<<"\n";
	z.putdata();
	return 0;
}
