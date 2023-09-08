/*
 * File: 3-print_alphabets.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
		putchar(letter);
		letter++;
}

	letter = 'A';
	while (letter <= 'Z')
{
		putchar(letter);
		letter++;
}

	putchar('\n');


	return (0);
}
