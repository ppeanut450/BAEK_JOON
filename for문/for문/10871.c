/* 10871��
���� N���� �̷���� ���� A�� ���� X�� �־�����. �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

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