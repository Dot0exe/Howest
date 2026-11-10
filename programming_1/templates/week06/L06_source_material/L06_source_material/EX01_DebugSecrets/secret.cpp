#include <iostream>
#include <bitset>	// used to print binary values
#include <iomanip>	// used for alignment
#include "secret.h"

/*
Function DEFINITIONS (debugging purposes only):
*/

void PrintCharacterA()
{
	const int ascii{ 65 };
	const char character{ static_cast<char>(ascii) };
	std::cout << "\n[" << character << "]\n"
			  << std::setw(8) << std::left << "Binary:" << std::bitset<8>(character)
		      << std::endl
			  << std::setw(8) << std::left << "ASCII:" << ascii << std::endl;
}

void PrintCharacterInfo(int ascii)
{
	const char character{ static_cast<char>(ascii) };
	std::cout << "\n[" << character << "]\n"
		       << std::setw(8) << std::left << "Binary:" << std::bitset<8>(character) 
			   << std::endl
		       << std::setw(8) << std::left << "ASCII:" << ascii << std::endl;
}

char GetCharacter(int ascii, bool upperCase)
{
	// TODO: use upperCase parameter to return upper/lowercase
	//	Hint1: look up ascii table. 
	//  Hint2: Remember we can mix int and char in expressions, e.g.: ascii < 'Z'.
	const char character{ static_cast<char>(ascii) };
	return character;
}
