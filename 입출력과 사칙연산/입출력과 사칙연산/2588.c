/* 2588��
(�� �ڸ� ��) �� (�� �ڸ� ��)�� ������ ���� ������ ���Ͽ� �̷������.

(����)

(1)�� (2)��ġ�� �� �� �ڸ� �ڿ����� �־��� �� (3), (4), (5), (6)��ġ�� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, B1, result;
	scanf("%d", &A);
	scanf("%d", &B);

	B1 = B;

	while (B > 0)
	{
		result = B % 10;
		printf("%d\n", A * result);
		B /= 10;
	}

	printf("%d\n", A * B1);

	return 0;
}