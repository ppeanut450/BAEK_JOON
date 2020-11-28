/* 10950번
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int T, A, B, i;
	scanf("%d", &T);

	int* sum = (int *)malloc(sizeof(int) * T);

	if (sum == NULL)
		printf("error");

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