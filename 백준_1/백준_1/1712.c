#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, C, count = 0, i = 1;
	scanf("%d %d %d", &A, &B, &C);
	int sum = -A;
	while(1)
	{
		if (i == B)
			break;
		sum += -B + C;
		count++;
		i++;
		if (sum > 0)
		{
			printf("%d", count);
			return 0;
		}
	}
	if (sum <= 0)
		printf("-1");
	return 0;
}