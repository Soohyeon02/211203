//#include <stdio.h>
//int main(void)
//{
//	int scores[2][3] = { 0, };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("scores[%d][%d]의 값 입력 : ", i, j);
//			scanf_s("%d", &scores[i][j]);
//		}
//	}
//	int(*p)[3] = scores;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("scores[%d][%d]=%d\n", i, j, (*(p + i))[j]);
//		}
//	}
//}