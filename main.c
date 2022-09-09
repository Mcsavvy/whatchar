/**
 * This script prints the ascii value of characters
 */

#include <stdio.h>

/**
 * main - Entry Point
 * 
 * Return: Always 0 (success)
 */
int main(void){
	char c;

	printf("Input a character then press enter");
	printf(" to get the ASCII value.\n");
	printf("Use ^D (Ctrl+D) to exit\n$ ");

	do
	{
		c = getchar();
		if (c == -1)
		{
			printf("[closed]\n");
			break;
		}
		if (c != 10)
		{
			printf("The ASCII value of '%c' is %d\n", c, c);
		
		}
		
		
	} while (c != EOF);
	
	return (0);
}
