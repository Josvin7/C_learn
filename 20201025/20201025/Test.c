#include<stdio.h>
#include<windows.h>
#include<time.h>


void game()  {
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)  {
		printf("请输入猜的数字>:");
		scanf_s("%d", &input);
		if (input > random_num) {
			printf("猜大了\n");
		}
		else if (input < random_num) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n");
			break;
		}
	}
}
int main1() {
	int input = 0;
	srand((unsigned)time(NULL));

	do {
		printf("******开始：->1*******\n");
		printf("******结束：->0*******\n");
		printf("请选择：>:");
		scanf_s("%d", &input);
		switch (input) {
		case  1:
			game();
			break;

		case 0:
			break;

		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	}while (input);


	//system("pause");
	return 0;
}