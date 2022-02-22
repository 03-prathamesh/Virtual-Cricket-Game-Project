
#include <iostream>
#include"game.h"
using namespace  std;

int main()
{
    //creating Object of Game class.
    Game g1;


    g1.Welcome();   //function call for Welcome() function 

    cout << endl << endl;

    cout << "\t Please ENTER to Continue.........." << endl;
    getchar();

    g1.dispAllPlayers();   //function call for dispAllPlayers() function.


    cout << endl <<  endl;

    cout << "\t Please ENTER to Continue.........." << endl;
    getchar();

    g1.selectPlayers();

    g1.showTeamPlayers();


    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\t Please ENTER to Continue.........." << endl;
    getchar();

    g1.toss();

    g1.startFirstInnings();

    cout << "\t Please ENTER to Continue.........." << endl;
    getchar();


    g1.startSecondInnings();
    
  //  g1.bat();

    g1.showMatchSummary();
    return 0;

     
}

