#include <stdio.h>
#include <unistd.h>
/**
 * main -A program that prints a line using the printfd function
 *
 *
 * Return: return 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\"-Dora Korpar,2015-10-19\n");
	return (1);
}
