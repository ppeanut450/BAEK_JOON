/* 10950��
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int T, A, B, i;
	scanf("%d", &T);

	int* sum = malloc(sizeof(int) * T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		sum[i] = A + B;
	}

	for (i = 0; i < T; i++)
		printf("%d\n", sum[i]);

	free(sum);
	return 0;
}