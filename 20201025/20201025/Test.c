#include<stdio.h>
#include<windows.h>
#include<time.h>


void game()  {
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)  {
		printf("������µ�����>:");
		scanf_s("%d", &input);
		if (input > random_num) {
			printf("�´���\n");
		}
		else if (input < random_num) {
			printf("��С��\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	}
}
int main1() {
	int input = 0;
	srand((unsigned)time(NULL));

	do {
		printf("******��ʼ��->1*******\n");
		printf("******������->0*******\n");
		printf("��ѡ��>:");
		scanf_s("%d", &input);
		switch (input) {
		case  1:
			game();
			break;

		case 0:
			break;

		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}while (input);


	//system("pause");
	return 0;
}