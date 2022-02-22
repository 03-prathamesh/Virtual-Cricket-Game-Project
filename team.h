#pragma once
// adding vector headerfile & string Headerfile in this team.h headerfile or team headerfile & also  including the player hederfile
//becausee in this class team we will use the class Player as well
#include<vector>
#include"player.h"
//just because player.h headerfile already  included the string headerfile, so we are indirectly getting <string> headerfile in this file due to this statement

class Team {

public:

	Team();     //constructor declaration

	std ::string name;  
	int totalRunsScored;
	int wicketsLost;
	int totalBallsBowled;
	std::vector<Player>players;





};