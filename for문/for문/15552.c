/* 15552��
���������� for�� ������ Ǯ�� ���� �����ؾ� �� ���� �ִ�. 
����� ����� ������ ���� ���� �Է¹ްų� ����� �� �ð��ʰ��� �� �� �ִٴ� ���̴�.

C++�� ����ϰ� �ְ� cin/cout�� ����ϰ��� �Ѵٸ�, 
cin.tie(NULL)�� sync_with_stdio(false)�� �� �� ������ �ְ�, endl ��� ���๮��(\n)�� ����. 
��, �̷��� �ϸ� �� �̻� scanf/printf/puts/getchar/putchar �� C�� ����� ����� ����ϸ� �� �ȴ�.

Java�� ����ϰ� �ִٸ�, Scanner�� System.out.println ��� BufferedReader�� BufferedWriter�� ����� �� �ִ�. 
BufferedWriter.flush�� �� �������� �� ���� �ϸ� �ȴ�.

Python�� ����ϰ� �ִٸ�, input ��� sys.stdin.readline�� ����� �� �ִ�. 
��, �̶��� �� ���� ���๮�ڱ��� ���� �Է¹ޱ� ������ ���ڿ��� �����ϰ� ���� ���
.rstrip()�� �߰��� �� �ִ� ���� ����.

���� �Է°� ��� ��Ʈ���� �����̹Ƿ�, �׽�Ʈ���̽��� ���� �Է¹޾Ƽ� ������ �� ���� ����� �ʿ�� ����. 
�׽�Ʈ���̽��� �ϳ� ���� �� �ϳ� ����ص� �ȴ�. */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int T, A, B;
	
	scanf("%d", &T);

	int* sum = (int*)malloc(sizeof(int) * T);

	if (sum == NULL)
		return -1;

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		sum[i] = A + B;
	}

	for (int i = 0; i < T; i++)
		printf("%d\n", sum[i]);

	free(sum);
	return 0;
}