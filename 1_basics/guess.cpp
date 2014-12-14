// small guessing game in C++
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  
  int myGuess;
  int pc;

  cout << "Try to guess the number which the pc will generate. \n";
  cout << "Enter a number between 1-100. \n";
  cin >>  myGuess;
  
  srand((unsigned)time(0));
  pc = rand() % 100 + 1;

 

  return 0;
}
