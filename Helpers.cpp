#include <iostream>
#include "Helpers.h"

std::string ConversationInputNames[3] =  {"FOREST", "NOTHING", "NONE"};
std::string PlayerTypeNames[3] = {"NOBLEMAN", "MERCHANT", "COMMONER"};


std::string ConversationData[40] = {
	"You venture directly west into the forest.\n",
	"The wind blows in a mysterious way as if it's telling you something. Listening closely you hear \"Go to the forest...\"\nThen you go directly west into the forest\n",
	"You pick up the armor and put it on. You gain some protection!\n",
	"You leave the armor and continue directly west on the journey...\n",
	"You successfully hide and watch who is approaching from the west.\nTwo humans on horses ride into view, but something is off... \nTheir skin and armor is the color of the blackest night like pure darkness, and they turn to your direction but don't see you.\nYou have sudden chills running up and down your spine, and you're trembling in terror. \nTheir eyes mainly their iris and pupils are glowing red with a face almost that of a skeleton.\nThe horseriders almost seem like they're dead and alive not human...\nYou notice one rider is not wearing armor, and the other is but the right shoulder bears a symbol that of a lion...\nThe riders ride off to the north...after overcoming your fright you come out of hiding and continue west.\nNight approaches. You find a small cave to sleep for the night. You sleep...\nThe suns starts to rise. You begin west.\nAfter two hours, you approach a pond with some stones in the pond leading to a big flat stone in the center.\nLooking down you see a sword on the ground. You pick up the sword.\nYou notice how the plantlife seems lively and green.\nSuddenly, a tall, magnificent white stag appears with antlers spreading from its head far and wide. \nThe white stag seems to be a very important creature.\nThe white stag stares at you. You feel creeped out...\nWhat do you do?\n",
	"\n",
	"\n",
	"You approach the white stag.\n",
	"You walk around the pond continuing west. Then, the white stag speaks, \"Come!\"\n",
	"You approach the white stag.\n",
	"You pass AGAIN, but this time the white stag commands a bear to come out from the bushes and makes you walk across the pond.\n",
	"You choose to fight but ELwood signals you to run for you are not strong enough to fight them.\n",
	"\n",
	"\n",
	"\n",
	"\n",
	"\n",
	"\n",
	"You throw throw your arm out in front of you with your hand stretched out, and your fingertips tingle then a massive lightning bolt shoots out of your fingers!\nThe lightning strikes both black knights. They turn into swarms of shadowy bats and crows, and they vanish!\n",
	"You: \"What magical training?\"\n",
	"You: \"I don\'t know, what you\'re talking about.\"\n",
	"You approach the horse with keeping your eyes on Eve so she does not get too far away but you have to go fast\nTYPE \'jump on its back\' or \'run to keep up\'\n",
	"the horse rears but then it takes off in the direction after Eve, giving you rest and excitement at the same time\n",
	"you do everything you can put everything you have into it as you run furiously to keep up and you do a suprisingly good job\n",
	"Great Fairy I am so confused I was not aware of anything that is happening! Elwood told me about my mother and father and prophecy he blessed me with magic, he warned me about the soceress, but still none of it makes sense what am I supossed to do?!?!\n",
 	"*nothing happens\n",
 	"Great Fairy: \"Yes as you saw in the forest this sword has great life in it, it will help you as you try and channel your light powers\"*put in inventory\n",
 	"Great Fairy: \"Good, this book holds accounts of ancient spells and rituals that you can read and learn to protect and fight the sorceress\"*put in inventory\n",
 	"Great Fairy: \"This shield is from knights that came through here to protect the people, it will help protect you as you figure out the best way to defeat the sorceress\" *put in inventory"};


void inputHandler(std::string &input) {

	for(int i = 0; input[i] != 0; i++) {
		if (input[i]>=97) {
			input[i] -= 32;
		//	std::cout<<input[i]<<std::endl;
		}
	}

}



