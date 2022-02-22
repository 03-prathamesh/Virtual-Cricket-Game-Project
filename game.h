
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
#include"team.h"  //"player.h",<string>,<vector>


class  Game {

public:
	  
	Game();    //default constructor declaration.

	int  playersPerTeam;
	int maxBalls;
	int totalPlayers;
	std::string players[11];      //array of string data type.  


	bool isFirstInnings;
	Team teamA, teamB;    //creating 2 objects of Team class
	
	Team* battingTeam, * bowlingTeam;  //creating 2 pointers of Team class.
	Player* batsman, * bowler; //creating 2 pointer of Player class.
	
		void Welcome();   //function declaration

		void dispAllPlayers();    //function declaration

		int IntegerInput();

		void selectPlayers();  

		bool validateSelectedPlayer(int);

		void showTeamPlayers();

		void toss();

		void tossChoice(Team);

		void startFirstInnings();

		void initializePlayers();

		void playInnings();

		void bat();

		bool validateInningsScore();

		void showGameScorecard();

		void startSecondInnings();

		void showMatchSummary();

};
