#include <stdio.h>
int main(void)
{
	int korean, english, math = 0;
	float avg = 0;
	scanf_s("%d %d %d", &korean, &english, &math);
	avg = (korean + english + math) / 3;
	if (avg >= 90) {
		printf("%.2f A", avg);
	}
	else if (avg >= 80 && avg < 90) {
		printf("%.2f B", avg);
	}
	else if (avg >= 70 && avg < 80) {
		printf("%.2f C", avg);
	}
	else if (avg >= 60 && avg < 70) {
		printf("%.2f C", avg);
	}
	else {
		printf("%.2f F", avg);
	}
}