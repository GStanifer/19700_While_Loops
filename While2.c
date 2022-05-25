/*
Program:  While2.c
Made by:  Garrett Stanifer
Date:  3/1/2021
Creates a random number between 1 and 20 and asks the user to guess the number.  Unlimited number of guesses
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number;
	int guess;
	char playAgain = 'y';
	srand(time(NULL));

	while (playAgain == 'y' || playAgain == 'Y')  //If the user enters 'y' or 'Y' the program repeats
	{
		number = rand()% 20 + 1;  //Random number between 1 and 20
		printf("I am thinking of a number between 1 and 20.  ");
		printf("Can you guess what it is?");
		scanf("%d", &guess);
		while (guess != number) //While guess is not equal to the random number, the code below is ran
		{
			if (guess > number) 
				printf("Guess is too high.\n"); //If guess is too high, prints statement
	
			else if (guess < number)  //If guess is too low, prints statement
			printf("Guess is too low.\n");
			printf("Enter another guess:  \n");
			scanf("%d", &guess);
		}
		printf("Congradulations!  You have guessed the number.\n");  //Prints if the guess is corect
		printf("The number was %d.\n", number);
		printf("Do you want to play again?  Enter y or Y for yes;  n or N for no  ");  //Asks user to enter if they want to play again or not
		scanf(" %c", &playAgain);
	}

	return 0;
}
