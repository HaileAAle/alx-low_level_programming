#include<stdio.h>
/**
* main - Entry point
* size of computer
* Return: Always 0 (Success)
*/
int main(void)
{ int intType;
float floatType;
long longType;
char charType;
long long longlongType;
/* sizeof evaluates the size of a variable */
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0); }
