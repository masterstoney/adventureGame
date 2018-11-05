#include <iostream>
#include "Helpers.h"

std::string ConversationInputNames[3] =  {"FOREST", "NOTHING", "NONE"};
std::string PlayerTypeNames[3] = {"NOBLEMAN", "MERCHANT", "COMMONER"};

void inputHandler(std::string &input) {

	for(int i = 0; input[i] != 0; i++) {
		if (input[i]>=97) {
			input[i] -= 32;
		//	std::cout<<input[i]<<std::endl;
		}
	}

}