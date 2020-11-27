/* 10950번
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. */

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