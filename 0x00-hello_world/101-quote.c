#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints without printf, puts
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, arr, 59);
return (1);
}
