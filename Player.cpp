#include <iostream>
#include "Player.h"
#include "DataStore.h"

using namespace std;


string Player::communicate(ConversationInput input) const {

	DataStore store;

	return store.inputRetrieveData(type,input,progress);

}











