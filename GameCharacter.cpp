#include <iostream>
#include "GameCharacter.h"
#include "Helpers.h"
#include "DataStore.h"

using namespace std;

void GameCharacter::communicate(std::ostream &out, ConversationInput input, int gameLevel, PlayerType type) const {

	DataStore store;

	if (input == INVALID) {
		out<<"Not a valid input";
		return; //might have to switch this to bool
	}

	out<<store.retrieveData(type,input,gameLevel);

}