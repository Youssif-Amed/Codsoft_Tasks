
#include <iostream>
#include<iomanip>
using namespace std;
/*---Global Declarations---*/
char game [7][7];
char player1;
char player2;
char loc1 ,loc2;
char winner;
bool check =false;
void assign_Symbol(void);
void grid(void);
void dis_board (void);
void dis_instructions (void);
void clr_grid (void);
bool win (void);
void sett (char locat , char player );
