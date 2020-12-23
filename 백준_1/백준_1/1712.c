#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (B >= C)
		printf("-1");
	else
		printf("%d", A / (C - B) + 1);
	
	if (A / (C - B) + 1 > 0)
		printf("%d", A / (C - B) + 1);
	else
		printf("-1");
	return 0;
}