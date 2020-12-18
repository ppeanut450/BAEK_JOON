/* 15596��
���� n���� �־����� ��, n���� ���� ���ϴ� �Լ��� �ۼ��Ͻÿ�.

a: ���� ���ؾ� �ϴ� ���� n���� ����Ǿ� �ִ� �迭 (0 �� a[i] �� 1,000,000, 1 �� n �� 3,000,000)
n: ���� ���ؾ� �ϴ� ������ ����
���ϰ�: a�� ���ԵǾ� �ִ� ���� n���� �� */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
long long sum(int* a, int n)
{
	long long ans = 0;
	for (int i = 0; i < n; i++)
		ans += a[i];
	return ans;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("%d", sum(a, n));
	free(a);
	return 0;
}