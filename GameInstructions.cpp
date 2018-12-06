#include <iostream>
#include "GameInstructions.h"

using namespace std;

GameInstructions::GameInstructions() {

	gameLevel = new string[15];
	gameLevel[0] = "After walking a mile, you encounter the edge of the forest, and you get an unnerving feeling about the forest. \nThen, you hear someone behind you running toward you, so you turn around. The person is Philip! \nHe starts shouting \"Hey...Hey!\". As he stops and is standing in front of you. He says...\nPhilip: \"Be careful in there! The forest was once a harmless place full of light where people could roam and travel freely back and forth. \nUntil about a week ago, the forest has been acting strange like dark and mysterious. \nMany people... knights... my friends have ventured into the forest and never came back.\nPlease, if you encounter my friends, please send them back or if they can\'t come back tell them Philip misses them and wishes they return.\"\nYou: \"How will I know who your friends are?\"\nPhilip: \"They will be knights with a lion\'s head emblem on the right shoulder of their armor. \nI bid you good fortune and wish your journey is a success!\"\nPhilip takes off a necklace which bears a unique symbol that you can\'t describe. Philip hands you the necklace.\nPhilip: \"The symbols stands for good luck. It has given me good luck all these years of being a knight, and I hope it brings you good luck as well. \nHere, take this also it\'s a rough sketch of the forest from my observations and traveling through the forest before. \nThe map isn\'t the best, but hopefully it will help you on your journey. I-\"\nYou (interrupting): \"Wait! I don\'t deserve all this. Why are you giving me all these things?\"\nPhilip: \"I pray you can find the lost people...my friends and return them if you can. \nI would have done it by now, but they keep me guard at the town to protect the town from any evil that may come from the forest.\nSince some of the guards have went into the forest and never returned, we\'ve been low on guards.\"\n(This is where you apologize for being rude if you choose the none option earlier. Shame on you!)\nYou: \"I can\'t repay you for these and your generosity.\"\nPhilip: \"Don\'t worry about it. Just bring my friends and the people back.\"\nYou: \"Thank you.\"\nYou and Philip part ways, and you venture into the forest ready for any adventure that awaits...\n...As you step into the forest, you notice the sky darkening. \nYou approach a sign that has been covered by a board that reads \"Turn back! All you'll find is pain, sorrow, and death.\"\nWhat is your choice?\nTYPE \'go straight\' or \'turn back\'\n";
	gameLevel[1] = "Thirty minutes have passed in your journey into the woods. \nYou come across a breastplate with blood on it upon further investigation you find a symbol resembling a lion's head on the right shoulder...\nYou feel saddened.\nTYPE 'pick up' or 'leave'\n";
	gameLevel[2] = "You glance at the map knowing somewhat where you are. The plantlife near you has decayed as far as the eye can see, but it looks different the plantlife is black not brown. \nYou feel some discomfort.\n*hears galloping in the distance slowly getting louder*\nQUICKLY! FIND A PLACE TO HIDE!!\nTYPE 'inside a hollowed fallen tree', 'behind a massive rock', or 'inside some bushes'\n";
 	gameLevel[3] = "TYPE 'approach' or 'pass'\n";
 	gameLevel[4] = "Continue with the 'approach' or 'pass'\n";
 	gameLevel[5] = "The white stag begins to speak, \"My name is Elwood.\"\nElwood: \"You are probably wondering why you are here? Why the forest is the way it is? Who I am?\nWell, I\'m one of the four creatures of light! You my friend are the chosen one!\"\nYou step back suprised and confused even more.\nElwood: \"You were born in the west village. All was happy and delightful, but that was soon to end. There was a great darkness on the horizon.\"\nYou (interuppting): \"Wait wait wait... I wasn\'t born in the west village!!\"\nElwood: \"Yes, you were. Your mother hadn\'t told you because of the events that led to your father\'s death and your mother fleeing as far as she could.\nFour years before your birth, an evil and wicked sorceress traveled into the forest. \nAmazed by her beauty, travelers quickly fell under her command soon to transform into dark hidous creatures called the black knights.\nThey became beings in between life and death. She soon raised an army and even became powerful enough to raise the dead. \nLife soon turned to something beyond death...life became black as the blackest night.\nAll of us, the light creatures the guardians of the light in the forest, had a vision of a prophecy that a babe born in four years time will soon bring down the sorceress' army and defeat her.\nFours years have passed, the sorceress took her black knight army and the undead army and laid seige to the west village then left the forest.\nThat is until a week ago...she returned. She laid waste to the other three light creatures that's why I'm the only one here.\"\nYou(interrupting again...): \"Wait you said a week ago!? That's when I heard a voice calling me to go to the west village...\"\nElwood: \"See you are the chosen one! Anyway stop interrupting me!! I'm trying to tell a story. \nI have come to you to bless you for I have to stay in hiding because the sorceress is trying to kill me.\nShe wishes to kill me to prevent me from helping you. Yes, she knows you're alive but doesn't know you are here yet.\"\nElwood bows to you which is how he blesses you. You feel warmth, courage, a fire burning inside like you've never felt before.\nAs you are about to pet Elwood, you hear someone coming out of the bushes from the south.\nELWOOD HAS BEEN SHOT!\nYou glance over to find the black knights from before with one holding a bow and arrow!\nTHE WIND BLOWS FIERCELY\nTHUNDER IS HEARD IN THE DISTANCE. LIFE BEGINS TO WHITHER YOU HAVE 2 SECONDS TO CHOOSE TO FIGHT OR RUN!\nTYPE 'F' or 'R'\n";
	gameLevel[6] = "Elwood turns into butterflies and they start to fly away\nYOU RUN NORTH\nARROWS BEING SHOT AT YOU BUT YOU DODGE. THE SKY DARKENS\nHURRY YOU HAVE 2 SECONDS DECIDE RIGHT OR LEFT\nTYPE r OR l\n";	
	gameLevel[7] = "YOU SLID BETWEEN THE GROUND AND A FALLEN TREE AND JUMP OVER A ROCK YOU CONTINUE RUNNING\nTHEY ARE STILL CHASING YOU\nYOU HAVE 2 SECONDS DECIDE LEFT, RIGHT OR STRAIGHT\n";
	gameLevel[8] = "TYPE l, r, or s\n";
	gameLevel[9] = "YOU STILL RUN! THEY ARE STILL CHASING YOU!\n";
	gameLevel[10] = "As your fear grows there is an energy building up inside you, you stop and turn around facing the black knights.\nTYPE 'shoot'\n";
	gameLevel[11] = "You throw throw your arm out in front of you with your hand stretched out, and your fingertips tingle then a massive lightning bolt shoots out of your fingers!\nThe lightning strikes both black knights. They turn into swarms of shadowy bats and crows, and they vanish!\nAfter wandering a few minutes, you realize you lost your way and have seemed to have lost your map in the chase.\nYou sit down with your head in your hands and begin to think about the what happened to the black knights and how did you shoot lightning out of your hands!\nThen, you hear a voice but from something small. You turn around and find a fairy flying down from the tops of the trees.\n(At this point you just accept the forest is weird and magical...)\nThe fairy says, \"Hello! My name is Eve Broomdew.\"\nEve Broomdew: \"I heard that the chosen has come at last! I'm so happy to meet you!\nThe Great Fairy has sent me to you to protect you and guide you. Tell me how far are you in your magical training?\"\nTYPE 'what' or 'idk'\n";
	gameLevel[12] = "Eve Broomdew(confused): \"Uh...The magical training you should have received from Elwood?\"\nYou: \"I'm sorry. Elwood was shot... and died.\"\nEve Broomdew(shocked): \"Oh my, oh my! This isn't good. This isn't good!\"\nYou: \"Why? what happens if the last light creature dies?\"\nEve Broomdew: \"Since there is no more guardians of the light, all life in the forest maybe even the life in the world will die.\nAll of the light in the world will fade! But fear not, for there is hope you!\nNow, tell me how were you able to shoot that lightning bolt from your fingers?\"\nYou: \"I don't know. I just felt something nice when Elwood blessed me, but it was soothing like I could have shot lightning and not have freaked out.\nThen, a moment ago I felt something cold and dark then I had shot the lightning.\"\nEve Broomdew: \"Yes, you are capable of magic. The blessing Elwood gave you unlocked this ability.\nUnfortunatly, the magic you felt was almost what people call dark magic brought about from our darkest emotions.\nThe soothing feeling was light magic that is much powerful than dark magic if controled.\"\nYou: \"Well I want to do what I can to help! How do I learn to control the magic I possess?\"\nEve Broomdew: \"We must make our way to the Great Fairy she will be able to help you, she will know what to do!\"\nYou start to follow Eve through the woods however things start to become chillier and chillier\nEve flying faster and faster becomes harder and harder to keep up with\nBut then you come across a horse\nIt is not a dark horse like the black knights had ridden but one with the emblem you recognize from Phillip\nYou are faced with a decision what do you do? Take the chance on an unknown horse or continue running like there is not tomorrow to keep up with Eve.\nTYPE 'catch that horse' or 'keep running'\n";
	gameLevel[13] = "Suddenly Eve stops in front of a stone wall\nYou stand behind her as she whispers words that open the wall\nBehind the wall is a beautiful palace, you feel the light that Elwood had given to you\nYou have arrived\nYou continue to follow Eve and she takes you to a huge room that has many other fairies in it\nThey are a squeeling in excitement saying \"there they are, the chosen one\"\n\"SILENCE\"\nyou look up and it is her, it is the Great Fairy\nGreat Fairy: \"Welcome chosen one, we have been eagerly awaiting your arrival\"\nTYPE 'speak' or 'stay silent'\n";
 	gameLevel[14] = "Great Fairy: \"I am sure you are confused but I believe the only way to truly make sense of all of this is to learn about how to channel your powers and the light within you\nwill guide you in how you should face the sorceress. Yes your parents lived a different life than they let on but they did their best to protect you so that you can save us all.\"\nIn front of you is the sword you saw in the pond, a book and a shield\nShe gestures for you to choose\nTYPE 'sword', 'book', or 'shield'\n";

}









