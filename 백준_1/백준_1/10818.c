#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N;
	int max = -1000001, min = 1000001;

	scanf("%d", &N);
	int* a = (int*)malloc(sizeof(int) * N);
	
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	printf("%d %d", min, max);
	free(a);
	return 0;
}