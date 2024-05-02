#include <iostream>
#include "TicTac.h"
using namespace std;
void assign_Symbol(void)
{   lab:
    cout <<"Player_1,Choose your symbol (X or O) ... ";
    cin>> player1 ;

    switch(player1){
     case 'X':
              player2 = 'O';
              break;
     case 'O':
              player2 = 'X';
              break;
     default:
            {
              cout<< "Error !!! \nEnter X or O ...  \n";
              goto lab ;
            }
    }
    cout <<"So, Player_1 will play with " <<player1 <<"\t \tPlayer_2 will play with "<< player2 << endl<<endl;

}


void dis_board(void)
{   cout<<endl;
    for(int i =0 ; i<7 ;i=i+1)
    {
        for(int j=0 ;j<7 ; j=j+1)
           {
            cout<<game[i][j] <<" ";
           }
     cout<<endl;
    }
 cout<<endl;
}

void grid(void)
{
    for(int i =0 ; i<7 ;i=i+1)
        for(int j=0 ;j<7 ; j=j+2)
             game [i][j] = '|' ;
    for(int k =0 ; k<7 ;k=k+1)
        for(int L=0 ;L<7 ; L=L+2)
             game [L][k] = '_' ;

}

void dis_instructions (void)
{
 char f='0';
      for(int i =1 ; i<7 ;i=i+2)
        for(int j=1 ;j<7 ; j=j+2)
               game [i][j] = f=f+1 ;
}

void clr_grid (void)
{
      for(int i =1 ; i<7 ;i=i+2)
        for(int j=1 ;j<7 ; j=j+2)
               game [i][j] = ' ' ;
}

bool win (void)
{   if ((game[1][1] == game[3][3])&& (game[3][3] == game[5][5]))
        {
            if(game[1][1]== ' ') return false;
            winner=game[1][1];
            return true ;
        }
    for(int i =1 ; i<7 ;i=i+2)
    if ((game[i][1] == game[i][3])&& (game[i][1] == game[i][5]))
        {
            if(game[i][1]== ' ') return false;
            winner=game[i][1];
            return true ;
        }
    for(int j=1 ;j<7 ; j=j+2)
    if ((game[1][j] == game[3][j])&& (game[3][j] == game[5][j]))
        {
            if(game[1][j]== ' ') return false;
            winner=game[1][j];
            return true ;
        }
  return false;
}


void sett (char locat , char player )
{
    switch(locat)
    {
        case '1' :  game[1][1]=player;  break;
        case '2' :  game[1][3]=player;  break;
        case '3' :  game[1][5]=player;  break;
        case '4' :  game[3][1]=player;  break;
        case '5' :  game[3][3]=player;  break;
        case '6' :  game[3][5]=player;  break;
        case '7' :  game[5][1]=player;  break;
        case '8' :  game[5][3]=player;  break;
        case '9' :  game[5][5]=player;  break;

    }
}


