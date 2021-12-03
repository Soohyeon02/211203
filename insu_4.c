//// ㅈㄴ 문제가 이상함 알아서 하삼
//
//#include <stdio.h>
//void A(int size, char simbol);
//int main(void)
//{
//	int size = 0;
//    char simbol = 0;
//    scanf_s("%d", &size);
//    scanf_s(" %c", &simbol,1);
//
//    A(size, simbol);
//}
//void A(int size, char simbol)
//{
//    int x, y, z = 0;
//    for (y = 1; y <= size; y++)
//    {
//        for (x = 0; x < y; x++)
//        {
//            printf("%c", simbol);
//        }
//        for (z = y + 1; z <= size; z++)
//        {
//            printf("-");
//        }
//        printf("\n");
//    }
//    return 0;
//}