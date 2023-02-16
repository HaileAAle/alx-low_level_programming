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
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long: %zu bytes\n", sizeof(longType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long long: %zu byte\n", sizeof(longlongType));
return (0); }
