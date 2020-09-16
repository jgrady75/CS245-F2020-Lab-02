/********************************************************************
 * AwardWinners.cpp :  
 * Program that randomly picks a movie for an award; makes use of 
 * string, vector, and random from the Standard Library.
 *
 * NOTE: This version of the program has numerous errors. 
 * Your job is to...
 *	1.) fix all bugs
 *	2.) commit your changes to your local Git repository
 *	3.) push your changes to your remote Git respository
 *	4.) submit a Pull Request to your instructor's Git project
 *
 ********************************************************************
 */

// Preprocessor directives
#include "pch.h"
#include <vector>
#include <iostream>
#include <random>
#include <string>

using namespace std;


int main()
{
	// Create a vector of strings; add items using a list initializer
	vector<string> movies = { "Tenet", "Mulan", "Bill & Ted Face the Music", "Feels Good Man" };

	// Add a 5th string to the end of the vector
	movies.push_back("Emma");

	// Announce the nominees
	cout << "And the nominees for Best Picture are..." << endl;

	// Loop through the vector; print each vector element to console.
	for (int i = 0; i < movies.size(); i++)
	{
		cout << movies.at(i) << endl;
	}

	// Set up a random number generator seeder
	std::random_device seed;

	// Create a random integer generator; chooses random ints from 1 to 5 (inclusive)
	std::uniform_int_distribution<int> rand_dist(1, 6);

	// Get the next random integer
	int pick_a_number = rand_dist(seed);

	// Get the item from the vector at the randomly-selected index
	string winner = movies.at(pick_a_number);

	// Convert each charcter of the 'winner' string to UPPERCASE
	for (char c : winner)
	{
		c = toupper(c);
	}

	// Print the UPPERCASE string
	cout << endl << "And the winner is..." << winner;

	return 0;
}

