// my first game in C++
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  int user;
  int pc;
  int PAPER = 1;
  int SCISSORS = 2;
  int ROCK = 3;

  cout << "Let's play a game of rock paper scissors \n";
  cout << "Type in:\n 1 for paper \n";
  cout << " 2 for scissors \n";
  cout << " 3 for rock\n\n";
  
  cin >> user;
  
  srand((unsigned)time(0));
  pc = rand() % 3 + 1;

    if( pc == user){
  	cout << "It's a tie \n";
    } 
   

    
  return 0;
}
