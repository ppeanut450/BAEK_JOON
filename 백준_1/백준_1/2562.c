#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int max = 0, count = 1;
	int* a = (int*)malloc(sizeof(int) * 9);

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > max)
			max = a[i];
	}

	for (int i = 0; i < 9; i++)
	{
		if (a[i] == max)
			break;
		count++;
	}

	printf("%d\n", max);
	printf("%d", count);

	free(a);
	return 0;
}