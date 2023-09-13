#include <iostream>
#include <cstdlib>
using namespace std ;
// Task 1 --> NUMBER GUESSING GAME
int main(){
int num , Guess_num , opt ;
PLAY : // label for goto statement (line 27)
num= (rand()%40 +1);  // Random value between 1 and 40
cout << "Guess a number between [1,40] ...  " ;
cin>> Guess_num;
while (Guess_num != num)  // when the guess is true We will go out the loop
{
    if (Guess_num > num )
        cout<<"Your guess number is bigger ...\n \n";
    else
        cout<<"Your guess number is smaller ...\n \n";

    cout << "Guess a number again ...  ";
    cin >> Guess_num ;
}
 cout << "Perfect.. Your number is correct \n";
 cout <<"The correct Number ="<< num <<" \n \n";
 ro:
 cout << "Play again --> Press 1 \t\t Exit --> Press 2 ....  "; // option to play again
 cin >> opt ;
 cout << endl <<endl;
 switch(opt){
  case 1 :
        goto PLAY ; break;  // restart the game
  case 2 :
       cout<< " Thanks for Playing ... \n"; break;
  default :
      {
        cout<<"Error !!  \n";
        goto ro;
      }

}
}
