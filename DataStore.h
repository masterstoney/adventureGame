#include <iostream>

#pragma once

class DataStore {

	public:
		DataStore(){};
		std::string retrieveData(int playerType, int inputNumber, int gameProgress) const;
		std::string inputRetrieveData(int playerType, int inputNumber, int gameProgress) const;

};