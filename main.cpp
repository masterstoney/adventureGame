#include <iostream>
#include "Helpers.h"
#include "GameCharacter.h"
#include "Player.h"
#include "DataStore.h"

using namespace std;

int main() {

	GameCharacter phillip("Phillip",4);
	Player user;
	string firstInput = "";
	string secondInput = "";

	cout<<"Once upon a time, there lived two villages separated by a vast forest. One village laid to the east of the forest and the other to the west. The two villages loved to trade and commune with each other. What makes this story different than any other story is that this forest is a mystical forest that holds many enchanting adventures where any sort of adventure can happen whether big or small. The residents of each village travel through the forest almost every day to commune with (what the residents of each village call) their \"sister\" village. Recently, the east village lost contact with the west village, and many travelers have tried to go to the west village in the first place but gave up and went to the east village. They said something was always keeping them from getting there. The people in the east village have gone into the forest but never returned… Some have ventured around the forest but never returned… The story starts when a young person who was a traveler had just entered the village to the east of the forest."<<endl;
	cout<<"\"Hello!\" said a voice to your right.\nYou turn to the right and see a guard dressed in all iron armor.\n\"My name is Phillip. What might be your business?\" asked Phillip.\nTYPE \'nobleman\', \'merchant\', or \'commoner\'"<<endl;
	cin>>firstInput;
	inputHandler(firstInput);
	user.setType(matchInput<PlayerType>(firstInput,3,PlayerTypeNames));

	if (user.getType() == Nobleman) {
		cout<<"You: \"I am a nobleman, sir Phillip!\"\nPhilip: \"My apologies, your excellency. It’s my job to ensure the safety of the village by knowing the business of the people and travelers. Where might you be headed, nobleman?\"\n"<<endl;
	} else if (user.getType() == Merchant) {
		cout<<"You: \"I’m a traveling merchant, Philip.\"\nPhilip: \"Indeed, sir! It’s my job to ensure the safety of the village by knowing the business of the people and travelers. Where might you be headed, nobleman?\"\n"<<endl;
	} else if (user.getType() == Commoner) {
		cout<<"You: \"I am only but a commoner, sir.\"\nPhilip: \"Please, call me Philip! It’s my job to ensure the safety of the village by knowing the business of the people and travelers. Where might you be headed, nobleman?\"\n"<<endl;
	}

	cout<<"TYPE ‘forest’ –to say you’re going to the forest, ‘nothing’ –to point to the forest and don’t say a thing, or ‘none’ –to say a rude remark and say you’ll find your way\n"<<endl;

	cin>>secondInput;
	inputHandler(secondInput);
	cout<<user.communicate(matchInput<ConversationInput>(secondInput,3,ConversationInputNames))<<endl;
	phillip.communicate(cout,matchInput<ConversationInput>(secondInput,3,ConversationInputNames),user.gameProgress(),user.getType());


	return 0;

}