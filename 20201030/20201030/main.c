#include "game.h"
// ������
int main() {
	int quit = 0;
	while (!quit) {
		Menu();
		int select = 0;
		scanf("%d", &select);
		// 1 ��ʼ��Ϸ
		// 2 �˳���Ϸ
		switch (select) {
		case 1:
			Game();
			break;
		case 2:
			printf("quit!\n");
			quit = 1;
			break;
		default:
			printf("Enter  Error! Try again!\n");
			break;

		}
	}
	printf("Bey!Bey!\n");
	system("pause");
	return 0;
}

