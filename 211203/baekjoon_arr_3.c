// 백준 배열 문제인데 알고리즘이 기발한 것 같음 참고하삼

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