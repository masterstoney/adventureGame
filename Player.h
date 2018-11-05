#include <iostream>
#include "Helpers.h"

#pragma once

class Player {

	public:
		Player(){
			energy = 100.0;
			progress = 0;
			type = Invalid;
		}
		int gameProgress() const {return progress;}
		double playerEnergy() const {return energy;}
		void setType(PlayerType chosenType) {type = chosenType;}
		PlayerType getType() const { return type; }
		void underAttack(double attackStrength) { energy -= attackStrength;}
		void increaseProgress() { progress++; }
		void playerDead() {progress = 0; }
		std::string communicate(ConversationInput input) const;
	private:
		PlayerType type;
		double energy;
		int progress;

};

