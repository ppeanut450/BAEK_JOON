/* 11022번
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int T;

	scanf("%d", &T);

	int* A = (int*)malloc(sizeof(int) * T);
	int* B = (int*)malloc(sizeof(int) * T);
	int* sum = (int*)malloc(sizeof(int) * T);
	
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A[i], &B[i]);		
		sum[i] = A[i] + B[i];
	}
	
	for (int i = 0; i < T; i++)
		printf("Case #%d: %d + %d = %d\n", i + 1, A[i], B[i], sum[i]);

	free(A);
	free(B);
	free(sum);

	return 0;
}