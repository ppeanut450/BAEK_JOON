/* 10871번
정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N, X;
	scanf("%d %d", &N, &X);

	int* A = (int*)malloc(sizeof(int) * N);
	
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (int i = 0; i < N; i++)
	{
		if (A[i] < X)
			printf("%d ", A[i]);
	}

	free(A);
	return 0;
}