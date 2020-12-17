/* 15596번
정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.

a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
n: 합을 구해야 하는 정수의 개수
리턴값: a에 포함되어 있는 정수 n개의 합 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int sum(int n)
{
	int sum = 0;
	int* a = (int*)malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	free(a);
	return sum;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return 0;
}