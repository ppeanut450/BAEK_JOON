/* 10952��
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, count = 0;	
	int sum[100];
	while (1)
	{
		scanf("%d %d", &A, &B);

		if (A == 0 && B == 0)
			break;
		
		sum[count] = A + B;

		count++;		
	}

	for (int i = 0; i < count; i++)
		printf("%d\n", sum[i]);

	return 0;
}