#include "BChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char BChecker::checkBLetter(char inputChar) {
	if(inputChar == 'b'||inputChar == 'B')
	{		
		return 'b';
	}
	else
		return inputChar;

}
