#include "game.h"

int main() {
	int quit = 0;
	int select = 0; //  �����û�ѡ��ʼ��Ϸ�����˳���Ϸ
	while (!quit) {
		Menu();
		scanf("%d", &select);
		switch(select){
			case  1:
				Game();
				break;

			case 2:
				quit = 1;
				break;
			default:
				printf("��������������ѡ��\n");
				break;
		}
	}

	printf("BeyBey!\n");
	system("pause");
	return 0;
}