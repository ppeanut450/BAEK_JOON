/* 8393번
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, sum = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum += i;

	printf("%d", sum);

	return 0;
}