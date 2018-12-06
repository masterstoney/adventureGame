#include <iostream>
#include <map>
#include <iterator>

#pragma once

using namespace std;

class GameCommunication {

	public:
		GameCommunication();
		string getConversationPiece(string userInput);
	private:
		map <string, int> conversationMap;

};