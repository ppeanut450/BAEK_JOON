/* 10950��
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, A, B, i;
	int sum[] = { 0 };
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d %d", &A, &B);
		sum[i] = A + B;
	}

	for (i = 0; i < num; i++)
	{
		printf("%d\n", sum[i]);
	}

	return 0;
}