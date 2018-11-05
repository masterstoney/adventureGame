#include <iostream>
#include "DataStore.h"

using namespace std;

string conversationData[3][3][10] = {

	{	//PlayerType Nobleman level
		{ //Forest responses
			{ 
				"Philip: \"Of course, your excellency! Let me show you the way.\"\nPhilip walks you to the forest and leaves you at the edge of the village to continue on your journey.\n"
			 }
		},
		{ //Nothing responses
			{
				"Philip: \"Ah! You wish to go to the forest. Let me show you the way.\"\nPhilip walks you to the forest and leaves you at the edge of the village to continue on your journey.\n"
			}
		},
		{ //None responses
			{
				"Philip is shocked at your attitude thinking you were going to be his only friend (now he’s sad and disappointed way to go).\nPhilip (in a humbled tone): \"Sorry, your excellency. I had only wished to guide you through the town.\"\nYou (with an annoyed tone): \"I can do that myself!\"\nPhilip walked behind you, and you continued into the village. Minutes passed into an hour, and you seemed to have gotten lost (what’s you get for being rude). You find Philip at the front of the bar, so you ask for his help who willingly shows you the way to the edge of the town and leaves you to your journey.\n"
			}
		}
	},
	{	//PlayerType Merchant level
		{ //Forest responses
			{
				"Philip: \"A wise place to set up shop maybe I can visit one day! Let me show you the way.\"\nPhilip walks you to the forest and leaves you at the edge of the village to continue on your journey.\n"
			}
		},
		{ //Nothing responses
			{
				"Philip: \"Ah! You wish to go to the forest. Let me show you the way.\"\nPhilip walks you to the forest and leaves you at the edge of the village to continue on your journey.\n"
			}
		},
		{ //None responses
			{
				"Philip is shocked at your attitude thinking you were going to be his only friend (now he’s sad and disappointed way to go).\nPhilip (in a humbled tone): \"Sorry, sir. I had only wished to guide you through the town.\"\nYou (with an annoyed tone): \"I can do that myself!\"\nPhilip walked behind you, and you continued into the village. Minutes passed into an hour, and you seemed to have gotten lost (what’s you get for being rude). You find Philip at the front of the bar, so you ask for his help who willingly shows you the way to the edge of the town and leaves you to your journey.\n"
			}
		}
	},
	{	//PlayerType Commoner level
		{ //Forest responses
			{
				"Philip: \"Of course, but may I ask why don’t you want to start a life here in this town?\"\nYou: \"It’s closer to the shore because I love the view of the ocean.\"\nPhilip: \"I’ve always wanted to live by the ocean, but I’m stationed here at this village and my duty comes first! Anyway, let me show you the way.\"\nPhilip walks you to the forest and leaves you at the edge of the village to continue on your journey.\n"
			}
		},
		{ //Nothing responses
			{
				"Philip: \"Ah! You wish to go to the forest. Let me show you the way.\"\nPhilip walks you to the forest and leaves you at the edge of the village to continue on your journey.\n"
			}
		},
		{ //None responses
			{
				"Philip is shocked at your attitude thinking you were going to be his only friend (now he’s sad and disappointed way to go).\nPhilip (in a somewhat prideful tone): \"Well, that’s no way to talk to a knight, commoner! I had only wished to guide you through the town.\"\nYou (with an annoyed tone): \"I can do that myself!\"\nPhilip walked behind you, and you continued into the village. Minutes passed into an hour, and you seemed to have gotten lost (what’s you get for being rude). You find Philip at the front of the bar, so you ask for his help who willingly shows you the way to the edge of the town and leaves you to your journey.\n"
			}
		}
	}
};





string playerConversationData[3][3][10] = {

	{	//PlayerType Nobleman level
		{ //Forest responses
			{ 
				"You: \"I wish to go to the forest, so I can reach the village because I have important business to take care of.\"\n"
			 }
		},
		{ //Nothing responses
			{
				"You: *points to the forest*\n"
			}
		},
		{ //None responses
			{
				"You: \"That’s none of your business, Philip! My business is my own and not yours!!\"\n"
			}
		}
	},
	{	//PlayerType Merchant level
		{ //Forest responses
			{
				"You: \"I wish to go to the forest, so I can reach the village because I would like to set up trade there.\"\n"
			}
		},
		{ //Nothing responses
			{
				"You: *points to the forest*\n"
			}
		},
		{ //None responses
			{
				"You: \"That’s none of your business, Philip! My business is my own and not yours!!\"\n"
			}
		}
	},
	{	//PlayerType Commoner level
		{ //Forest responses
			{
				"You: \"I wish to go to the forest, so I can reach the village, so I can start a new life in the village to the west\"\n"
			}
		},
		{ //Nothing responses
			{
				"You: *points to the forest*\n"
			}
		},
		{ //None responses
			{
				"You: \"That’s none of your business, Philip! My business is my own and not yours!!\"\n"
			}
		}
	}
};



string DataStore::retrieveData(int playerType, int inputNumber, int gameProgress) const {

	return conversationData[playerType][inputNumber][gameProgress];

}

string DataStore::inputRetrieveData(int playerType, int inputNumber, int gameProgress) const {

	return playerConversationData[playerType][inputNumber][gameProgress];

} 






























