#include<iostream>
#include<ctime>
using namespace std;
int main()
{
  int num,guess,Try=0;
  srand(time(0));
  num=rand()%100+1;//guess number between 100;
  cout<<"Guess My Number Game\n";
  do
  {
      cout<<"Guess the number between 1 to 100 :"; /* code */
      cin>>guess;
      Try++;
      if(guess>num)
      cout<<"TOO HIGH!"<<endl;
      else if(guess<num)
      cout<<"TOO LOW!"<<endl;
      else
      cout << "\nCorrect! You got it in " << Try << " guesses!\n";
  } while (guess!=num);
  return 0;
}