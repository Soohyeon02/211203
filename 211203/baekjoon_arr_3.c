// ���� �迭 �����ε� �˰����� ����� �� ���� �����ϻ�

#include <stdio.h>
int main(void)
{
	int M[10] = { 0, }, res = 1;

	for (int i = 0; i < 3; i++)
	{
		int x;
		scanf_s("%d", &x);
		res *= x;
	}
	while (res != 0)
	{
		M[res % 10]++;
		res /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", M[i]);
	}

	return 0;
}