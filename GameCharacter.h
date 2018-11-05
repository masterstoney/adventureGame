#include <iostream>
#include "Helpers.h"
#include "Player.h"

#pragma once

class GameCharacter {

	public:
		GameCharacter(std::string characterName, double attackPower) {
			name = characterName;
			powerLevel = attackPower;
		}
		std::string getName() const {return name;}
		void attack(Player victim) { victim.underAttack(powerLevel); }
		void communicate(std::ostream &out, ConversationInput input, int gameLevel, PlayerType type) const;

	private:
		std::string name;
		double powerLevel;
};