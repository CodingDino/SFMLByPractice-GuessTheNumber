// Include the library we need to print stuff
#include <iostream> 
// Include the library we need to generate random numbers
#include <stdlib.h>
// Include the library we need to get the current time
#include <time.h>

// The start of our main() function, starting point of the program
int main()
// curly bracket that starts the main() function.
{
	// -----------------------------------------------
	// Print the title of our game
	// -----------------------------------------------

	// Print text to console using cout
	std::cout << "GUESS THE NUMBER" << std::endl;
	std::cout << "By Sarah Herzog" << std::endl;
	std::cout << std::endl;
	std::cout << "Guess a random number generated by the computer!" << std::endl;
	std::cout << std::endl;

	// -----------------------------------------------
	// Generate a random number
	// -----------------------------------------------

	// Create a variable to hold our number
	// Assign a value of 0 to the variable by default
	int secretNumber = 0;

	// Initialise our random number generator
	// We use time(NULL) to initialise it using our current time
	// This will get us different numbers each time the game is run
	srand(time(NULL));

	// Generate a random number
	// Modify the number to be between 1 and 10
	// Assign that number to our secretNumber variable
	secretNumber = rand() % 10 + 1;

	// Print the secret number to the screen
	// NOTE: We'll want to remove this once we add guessing!
	std::cout << "The secret number is: " << secretNumber << std::endl;
	std::cout << std::endl;

	// -----------------------------------------------
	// Guessing section
	// -----------------------------------------------

	// Create a variable to hold the player guess
	// Assign a value of 0 to the variable by default
	int guess = 0;

	// Print out a prompt to the player to tell them to guess
	std::cout << "Please guess a number between 1 and 10: " << std::endl;
	std::cout << "> ";

	// Get input from the player and store it in the guess variable
	std::cin >> guess;

	// Print out the player's guess
	std::cout << std::endl;
	std::cout << "You guessed: " << guess << std::endl;
	std::cout << std::endl;

	// Check whether the player's guess was correct
	if (guess == secretNumber)
	{
		// This code will be executed if the guess is correct

		// Print feedback to the player
		std::cout << "Your guess is correct" << std::endl;
		std::cout << std::endl;
	} // end of correct guess if body
	else
	{
		// This code will be executed if the guess is wrong

		// Print feedback to the player
		std::cout << "Your guess is wrong" << std::endl;

		// Check whether the player's guess was too low or too high
		if (guess < secretNumber)
		{
			// This code will be executed if the guess is too low 

			// Print feedback to the player
			std::cout << "Your guess is too low" << std::endl;
			std::cout << std::endl;
		} // end of low/high if body
		else
		{
			// This code will be executed if the guess is too high

			// Print feedback to the player
			std::cout << "Your guess is too high" << std::endl;
			std::cout << std::endl;
		} // end of low/high else body
	} // end of correct guess else body

	// -----------------------------------------------
	// End the program
	// -----------------------------------------------

	// Make the computer wait before going on to next statement
	system("PAUSE");

	// Exit point for the program - closes the console window
	return 0;

	// curly bracket that ends the main() function.
}