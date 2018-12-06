#include <iostream>

#pragma once

class GameInstructions {

	public:
		GameInstructions();
		std::string retrieveInstruction(int gameProgress) const {return gameLevel[gameProgress];};
	private:
		std::string *gameLevel;

};