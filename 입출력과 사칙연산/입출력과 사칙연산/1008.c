/* 1008��
�� ���� A�� B�� �Է¹��� ����, A/B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%0.15Lf", (long double) A / (long double) B );
	return 0;
}