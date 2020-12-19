#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, C, i = 0;
	scanf("%d %d %d", &A, &B, &C);

	while (1)
	{
		if (i == B)
			break;
		i++;
		if (i > A / (C - B))
		{
			printf("%d", i);
			return 0;
		}
	}
	if (-A - B * i + C * i <= 0)
		printf("-1");
	return 0;
}