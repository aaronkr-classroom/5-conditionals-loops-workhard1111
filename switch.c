//nested.c (��ø��)

#include <stdio.h>

int main(void)
{
	int score;
	char grade;


	scanf_s("%d", &score);

	switch (score / 10)
	{ // 100 / 10 = 10
	case 10: // ã�Ұ� ���
	case 9:
		grade = 'A'; break; //switch�� ������ (����)
	case 8:
		grade = 'B'; break;
	case 7:
		grade = 'C'; break;
	case 6:
		grade = 'D'; break;
	default:
		grade = 'F'; break;
	}


	printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);


	getch(); //�ܼ�â�� �����ϱ�

	return 0;
}