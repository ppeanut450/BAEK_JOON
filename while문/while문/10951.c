/* 10951번
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B;
	while (scanf("%d %d", &A, &B) != EOF)
		printf("%d\n", A + B);	

	return 0;
}