#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int x, y, z, a = 0;
	scanf("%d", &x);
	y = x;
	while (x != 0)
	{
		z = x % 10;
		a = a * 10 + z;
		x = x / 10;
	}
	if (y == a)
	{
		printf("%d is palindrome number\n", y);
	}
	else
	{
		printf("%d is not palindrome number\n", y);
	}
	return 0;
}