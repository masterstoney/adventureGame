#include <cstdio>
#include <cstdlib>

#pragma once

size_t strlen(const char *string);

void remove_new_line (char *str){
	int length;
	if( ((length=strlen(str)) >0)){
		if(str[length-1]=='\n'){
			str[length-1]='\0';
		}
	}
}



string charToString (char *str) {

	string returnString = "";
	for (int i = 0; str[i] != '\0'; i++) {
		returnString += str[i];
	}
	return returnString;

}







