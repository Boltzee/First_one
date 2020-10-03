//                                              THE GUESSING GAME

#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
#include "player_info.h"      // header file containing the definions and implementation of  
using namespace std;          // the class player_info and other functions used in the game.

int main(){
   game1:
   while(1){
        system("cls");
        cout<<"\t\t\t\t THE GUESSING GAME \n\n";
        cout<<"1. Play as single player\n2. Multiplayer\n3. How to play\n4. Exit\nEnter your option:";
        int op;cin>>op;
        if(op<3){
           if(op!=2){
              single:
              char h;
              int num=random_generator(op);
              int guess,hints=5,turns=0;
              int temp=0;
              bool instinct=1;
              game:
              system("cls");
              cout<<"Player make your guess:";cin>>guess;
              if(guess==-2){ 
                 cout<<"The number was "<<num<<"\n";check(num,temp);
                 cout<<"\nDo you want to play again (Y/N):";cin>>h;
                 if(h=='Y') goto game1;
                 else {cout<<"Thank you for playing!!!\n";return 0;}
              }
              if(guess==num){
                 turns++;
                 cout<<"\nCongratulations you have found the number\n";
                 cout<<"\nDo you want to play again (Y/N):";cin>>h;
                 if(h=='Y') goto game1;
                 else {cout<<"Thank you for playing!!!\n";return 0;}
              }
              else{
                 if(instinct) {tell(1,guess,num,hints,temp);instinct=0; }
                 else { tell(0,guess,num,hints,temp);instinct=1; }
                 if(guess!=-1) temp=guess;
                 turns++;
                 cout<<"\nPress any key to continue";getch();
				 goto game;
              }
           }
           else{
           	  system("cls");
           	  cout<<"Enter the number of players:";
              int players;cin>>players;
              if(players==1) goto single;
              player_info *p=new player_info[players+1];
              char h;
              int num=random_generator(op);
              int guess,guess_count=0;
              game2:
              system("cls");
              for(int i=1;i<players+1;i++){
                 cout<<"Player "<<i<<" make your guess:";cin>>guess;
                 if(guess==-2){
                    int min_diff=INT_MAX,index;
                    guess_count++;
                    if(guess_count==players){
                       cout<<"The number was "<<num<<"\n";
                       for(int i=1;i<players+1;i++){
                       	  int k=p[i].closest_element(num);
                          if(k<min_diff) {min_diff=k;index=i; }
                       }
                       int l=p[index].closest_element(num);
                       if(abs(num-l)<=10) cout<<"Player "<<index<<" was close to the number.\n";
                       cout<<"\nDo you want to play again (Y/N):";cin>>h;
                       if(h=='Y') { delete [] p;goto game1; }
                       else {cout<<"Thank you for playing!!!\n";delete [] p;return 0;}
                    }
                    else continue;
                 }
                 if(guess==num){
                    p[i].increment_turns();
                    cout<<"\nCongratulation player "<<i<<",you have found the number\n";
                    cout<<"\nDo you want to play again (Y/N):";cin>>h;
                    if(h=='Y') { delete [] p;goto game1; }
                    else {cout<<"Thank you for playing!!!\n";delete [] p;return 0;}
                 }
                 else{
                    if(p[i].get_instinct()){ 
					  tell(1,guess,num,p[i].get_hints(),p[i].get_temp()); p[i].set_instinct(rand()%2);}
                    else {
					  tell(0,guess,num,p[i].get_hints(),p[i].get_temp()); p[i].set_instinct(rand()%2);}
                    if(guess!=-1) p[i].set_temp(guess);
					p[i].increment_turns();
					cout<<"\nPress any key to continue\n";getch();
                 } 
              }
              goto game2;
           }
        }
        else if(op==3){
           system("cls");
           cout<<"INTERACTION\n\n";
           ifstream infile;
           infile.open("how to play the game.txt");    //text file that should be present in the same directory where   
           string data;                                //the program is present (contains the instructions to the game)
           if (infile.is_open())
           {
               while (getline(infile,data))
               {
                 cout<<data<<'\n';
               }
               infile.close();
           }
           cout<<"Press any key to continue";getch();
        }
        else{
           cout<<"Thank you for playing!!!\n";
           return 0;;
        }
   }
   return 0;
}

