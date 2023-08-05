#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *main - The function adds positive numbers
 *@argc : Argument count
 *@argv :Argument vector
 *
 *Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
int addition, num, a, b, n;

addition = 0;

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] > '9' || argv[a][b] < '0')
{
puts("Error");
return (1);
}
}
}

for (n = 1; n < argc; n++)
{
num = atoi(argv[n]);
if (num >= 0)
{
addition += num;
}
}

printf("%d\n", addition);
return (0);
}
/**
 *_atoi - Function converts string to integer
 *@s : The string
 *
 *Return: An integer
 *
 */
int _atoi(char *s)
{

int i = 0;
int j = 0;
int k = 0;
int length = 0;
int l = 0;
int number = 0;

while (s[length] != '\0')
length++;

while (i < length && l == 0)
{
if (s[i] == '-')
++j;

if (s[i] >= '0' && s[i] <= '9')
{
number = s[i] - '0';
if (j % 2)
number = -number;
k = k * 10 + number;
l = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
l = 0;
}
i++;
}

if (l == 0)
return (0);

return (k);
}
