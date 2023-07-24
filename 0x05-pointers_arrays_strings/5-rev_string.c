#include "main.h"
/**
 * rev_string - prints a string, in reverse
 *@s :The string
 *
 * Return:void
 */
void rev_string(char *s)
{
int len;
int left = 0;
int right = len(s) - 1;
char temp;

while (left < right)
{
temp = s[left];
s[left] = s[right];
s[right] = temp;
left++;
right--;
}
}
