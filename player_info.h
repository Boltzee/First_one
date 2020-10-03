// Implementation of the member functions of the class player_info 
// along with the definions of the some of the funcions used in the game

#ifndef playerinfo
#define playerinfo
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>

using namespace std;
class player_info{
	public:
		player_info(int x=5,int y=0,int z=0,int l=rand()%2): hints(x),temp(y),turns(z),instinct(l){}
		int get_turns(){
			return turns;
		}
		void increment_turns(){
			turns++;
		}
		bool get_instinct(){
			return instinct;
		}
		void set_instinct(bool value){
			instinct=value;
		}
		void decrement_hints(){
			hints--;
		}
		int& get_hints(){
			return hints;
		}
		void set_temp(int s){
			temp=s;
		}
		int get_temp(){
			return temp;
		}
		void append_choices(int g){
	        choices->push_back(g);
        }
        int closest_element(int n){
	        int temp=INT_MAX;
	        for(int i=0;i<choices->size();i++){
		        if(abs((*choices)[i]-n)<temp) temp=abs((*choices)[i]-n);
	        }
	        return temp;
        }
		~player_info(){delete choices;}
	private:
		int hints,turns,temp;
		vector<int> *choices=new vector<int>;
		bool instinct;
};

int random_generator(int a){
   srand(time(0));
   int num=rand()%100;
   if(num%5==0) num+=7;
   return num;
}

void tell(bool provide,int b,int number,int &hints,int temp){
   if( b==-1 && hints==0) {cout<<"You have run out of hints to use\n";return ;}
   if(b==-1){
      if(temp<number) cout<<"The number is greator than "<<temp<<"\n"; 
      else cout<<"The number is less than "<<temp<<"\n";hints--;
      cout<<"The number of hints remaining ="<<hints<<"\n";
      return ;
   }
   if(provide){
      if(b<number) cout<<"The number is greator than "<<b<<"\n"; 
      else cout<<"The number is less than "<<b<<"\n";
      return ;
   }
   else{
      if(b>number) cout<<"The number is greator than "<<b<<"\n"; 
      else cout<<"The number is less than "<<b<<"\n";
      return ;
   }
}

void check(int n,int t){
   if(abs(n-t)<=10) cout<<"You were close to the number\n";return ;
}

#endif
