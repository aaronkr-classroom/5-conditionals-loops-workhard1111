//for.c

#include <stdio.h>

int main(void)
{
	int sum = 0, num;

	for (num = 1; num <= 5; num++)
	{
		printf("num(%d) + sum(%d) = %d\n", num, sum, (sum + num));

		sum = sum + num; // ���� �Ѱ谪
	}
	printf("Final : num %d, sum %d", num, sum);

	getch();
	return 0;
}