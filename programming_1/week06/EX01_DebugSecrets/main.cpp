#include <iostream> // enables the usage of std::cout and std::cin
#include "secret.h"


int main()
{
	// STEP 0: follow the instructions in the assignment step by step!
	PrintCharacterA();

	/*
	 STEP 1: uncomment the two lines below. Remove previous breakpoint.
		- put a breakpoint next to PrintCharacter(60)
		- step into the function and continue stepping until you return here.
			-> keep an eye on the locals and console window at all times!
	*/
	PrintCharacterInfo(60);
	/*
		- keep stepping through this function as well
	    - take a look at the output in your console and make sure you understand
	*/
	PrintCharacterInfo(51);

	/*
	 STEP 2:
	 	PART a: uncomment the line below + add a breakpoint. Remove previous breakpoints.
			-> step into / through this function. Do not change any code.
	 		-> make sure you see the "GetCharacter will return" message in the locals window
	 		-> What appears in the console? Why?
	 		-> after answering this question (make sure you understand!) continue to PART b.
	*/
	GetCharacter(64, false);

	/*
	 PART b: uncomment the following lines.
	 		-> BEFORE EXECUTING, try to guess the result! 
	 		-> remove any previous breakpoints
	 		-> place a breakpoint next to the first line below
	 		-> run + step into / through the code to check if your guess was correct
	*/
	char letter{ GetCharacter(94, false) };
	std::cout << std::endl << letter << std::endl;

	/*
	 PART c: remove any previous breakpoints and uncomment the line below
			-> BEFORE EXECUTING, try to guess the result!  
			-> place a breakpoint next to the first line below
			-> run + step into / through the code to check if your guess was correct
	*/
	std::cout << "Perfect! " << GetCharacter(60, false) << GetCharacter(51, false) << std::endl;

	/*
	 PART d: time to write your own code!
		-> The GetCharacter function is not finished yet. 
		-> First, finish the TODO in secrets.cpp 
		-> next, test by calling the function with different ARGUMENTS:
			'b', true
			'o', false
			'S', true
			'S', false 
			'!', true 
		-> instead of sending the results to the console, catch in variable + check via debug
	*/

	return 0;
}

