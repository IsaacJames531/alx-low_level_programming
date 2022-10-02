#include<stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
 int main(int args, char *argv[])
 {
     printf("%d\n", args -1);
     (void)argv;
     return(0);
 }
