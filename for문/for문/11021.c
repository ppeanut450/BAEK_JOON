/* 11021��
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A, B, T;
	scanf("%d", &T);
	int* sum = (int*)malloc(sizeof(int) * T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		sum[i] = A + B;
	}
	for (int i = 0; i < T; i++)
		printf("Case #%d: %d\n", i + 1, sum[i]);

	free(sum);
	return 0;
}