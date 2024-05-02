#include <iostream>
using namespace std ;
// Task 2 --> SIMPLE CALCULATOR

int main(){
int num1 , num2, result , opt;
char sign ;   // Which is an operator ?
Ent :        // A label of goto statement in line 30,41
cout<< "Enter your Equation :  \n \t";

cin >> num1 >> sign >> num2 ;

switch(sign){
case '+':
    result = num1 + num2 ;
    break;
case '-':
    result = num1 - num2 ;
    break;
case '*' :
    result = num1 * num2 ;
    break;
case '/' :
    result = num1 / num2 ;
    break;
default :
   {
    cout << "Error !!! \n Enter the equation again ... \n"; // If user enters another operator other than +,-,*,/
    goto Ent ;  //To get inputs again, Ent in line 9
   }
}
cout << "Result = " << result << endl;
again :         //A label of goto statement in line 47
cout << "Another Equation --> Press 1 \t\t Exit --> Press 2 ....  "; // option to Enter again
cin >> opt ;
cout << endl <<endl;
 switch(opt){
  case 1 :
        goto Ent ;  // //To get inputs again, Ent in line 9
  case 2 :
       cout<< "Thanks.... \n";
       break;
  default :
      {
       cout<< "Error in your choice ...\n";
        goto again ;    // To know if the user wants to continue or exit
      }
}
}
