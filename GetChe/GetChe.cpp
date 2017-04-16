// GetChe.cpp : Defines the entry point for the console application.
//Exercise from book Object Orientated Programming in C++

#include "stdafx.h"
#include <iostream>
#include <conio.h>


int main()
{
	int nonSpaceChar = 0; // counts none space characters
	int wordCount = 1; // counts spaces between words
	char charRead; //variable used to read characters entered

	while ((charRead = getche()) != '\r') // loop untill Enter is pressed
	{
		if (charRead == ' ') // if it is a space 
			wordCount++; // count a word
		else			// otherwise 
			nonSpaceChar++; // count characters
	}

	std::cout << "Words= " << wordCount << std::endl;
	std::cout << "Letters= " << nonSpaceChar << std::endl;

	system("pause");

    return 0;
}

