/* 11022��
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

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