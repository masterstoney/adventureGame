#include <iostream>
#include <cstddef>

#pragma once

//Enum and Array for all available conversational options
enum ConversationInput {Forest, Nothing, None, INVALID};

extern std::string ConversationInputNames[3]; //= {"FOREST", "NOTHING", "NONE"};

//Enum and Array for the different character roles that the player can take
enum PlayerType {Nobleman, Merchant, Commoner, Invalid};

extern std::string PlayerTypeNames[3]; //= {"NOBLEMAN", "MERCHANT", "COMMONER"};



extern std::string ConversationData[40];




/*Function to handle the user's input so that they get a response
It makes sure all input ends up in CAPS regardless of how the user inputs them */

void inputHandler(std::string &input);

//Function to map the input with the appropriate response

template <typename T>
T matchInput(std::string userResponse, int validResponses, std::string responseStrings[]) {

	int responsePosition = validResponses;
	for (int i = 0; i < validResponses; i++) {
		if(userResponse == responseStrings[i]) {
			responsePosition = i;
			break;
		}
	}
	return static_cast<T>(responsePosition);

}






















