#include <iostream>
#include <map>
#include <iterator>
#include "GameCommunication.h"
#include "Helpers.h"

using namespace std;

GameCommunication::GameCommunication() {

	conversationMap.insert(make_pair("go straight", 0));
	conversationMap.insert(make_pair("turn back", 1));
	conversationMap.insert(make_pair("pick up", 2));
	conversationMap.insert(make_pair("leave", 3));
	conversationMap.insert(make_pair("inside a hollowed fallen tree", 4));
	conversationMap.insert(make_pair("behind a massive rock", 4));
	conversationMap.insert(make_pair("inside some bushes", 4));
	conversationMap.insert(make_pair("approach", 7));
	conversationMap.insert(make_pair("pass", 8));
	conversationMap.insert(make_pair("F", 9));
	conversationMap.insert(make_pair("R", 10));
	conversationMap.insert(make_pair("r", 11));
	conversationMap.insert(make_pair("l", 12));
	conversationMap.insert(make_pair("l", 13));
	conversationMap.insert(make_pair("r", 14));
	conversationMap.insert(make_pair("s", 15));
	conversationMap.insert(make_pair("shoot", 15));
	conversationMap.insert(make_pair("what", 16));
	conversationMap.insert(make_pair("idk", 17));
	conversationMap.insert(make_pair("catch that horse", 18));
	conversationMap.insert(make_pair("keep running", 19));
	conversationMap.insert(make_pair("jump on its back", 20));
	conversationMap.insert(make_pair("run to keep up", 21));
	conversationMap.insert(make_pair("sword", 22));
	conversationMap.insert(make_pair("book", 23));
	conversationMap.insert(make_pair("shield", 24));

}



string GameCommunication::getConversationPiece(string userInput) {

	return ConversationData[conversationMap[userInput]];

}

