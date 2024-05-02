#include"TicTac.h"
#include <iostream>
using namespace std;
int main(){
cout <<setw(25)<<"---- Welcome In TIC TAC TOE ---\n";
assign_Symbol();
grid();
dis_instructions ();
cout<< "How to play !! \nEvery player,Look at the grid and write the char of location which you want to play in ..";
dis_board ();
cout<< "--- Let's Play Now --- \n";
clr_grid ();
while(!check)
{
    cout<< "player1 choose your location ...";  cin>>loc1 ;
    sett(loc1,player1);
    dis_board();
    check = win();
        if(check) break;
    cout<< "player2 choose your location ...";  cin>>loc2 ;
    if(loc1 == loc2)
    {
        cout<<"You can't choose the same location choosen by player1 \n";
        cout<< "player2 choose your location ...";  cin>>loc2 ;
    }
    sett(loc2,player2);
    dis_board();
    check = win();
}
if(winner == player1)
    cout <<endl<<"player1 is winner .....\n\n";
else
    cout <<endl<<"player2 is winner .....\n\n";

}
