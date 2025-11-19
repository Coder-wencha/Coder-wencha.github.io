#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int m, n, s = 0, a = 22;
	scanf("%d", &m);
	while (1)
	{
		s += a;
		if (s > m)
		{
			break;
		}
		a += 20;
	}
	n = (a - 20) / 10;
	printf("%d\n", n);
	return 0;
}