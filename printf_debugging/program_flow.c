#include <stdio.h>
#include <stdlib.h>





/* DIRECTIONS:
The goal of this tutorial is to use printf statements to track the flow of a
program. All of the problems are somewhat trivial and can be easily avoided; 
however, the purpose is to show how having a log of what paths are taken as well
as being able to see the actions the returns from certain functions from a 
library you cannot see if useful. A debugger is just as useful as printf in this
case by using break points. We will use both in the seminar.
*/

//function signatures for reference. please do not look at the implementations below
void maze_A();
void maze_B();
int makeDecision(int decisionNum);
int mysteryCompare(int a, int b);

int main(){
	//declarations
	int switchVar;
	int a, b, c;
	
	//Off we go! We want to reach the end of the program and return 0;
	printf("You begin your adventure.\n");
	//first you must traverse a maze. You can only find your way through one maze: A or B
	maze_A();
	
	//now you must make a decision between 1 and 4, only one the proper number will let you continue
	if(!makeDecision(0)){
		//wrong decision
		return 1;
	}
	
	//make it through the switch case!
	switchVar = 5;
	switch(switchVar){
		case 1:
			//wrong!
			return 1;
			break;
		case 3:
			//wrong!
			return 1;
		case 5:
			//woo correct!
		default:
			//something went wrong!
			return 1;
	}
	
	//this comparison function does some comparison... we want the greatest value stored into c
	a = 1;
	b = 2;
	c = 0;
	if(mysteryCompare(a, b)){
		c = a;
	} else {
		c = b;
	}
	if(c != b){
		return 1;
	}
	
	printf("Success! you have made it through the program!\n");
	return 0;
}



//=========== STOP STOP STOP STOP STOP STOP STOP STOP STOP =====================

//=========== STOP STOP STOP STOP STOP STOP STOP STOP STOP =====================

// ========== DO NOT LOOK BELOW THIS POINT FOR THIS EXCERCISE ==================

//=========== STOP STOP STOP STOP STOP STOP STOP STOP STOP =====================

//=========== STOP STOP STOP STOP STOP STOP STOP STOP STOP =====================



void maze_A(){
	while(1);
}

void maze_B(){
	return;
}

int makeDecision(int decisionNum){
	if(decisionNum != 2){
		return 0;
	}
	return 1;
}

int mysteryCompare(int a, int b){
	if(a < b){
		return 1;
	}
	return 0;
}