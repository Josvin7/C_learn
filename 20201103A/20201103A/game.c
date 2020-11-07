#include  "game.h"
void Menu() {
	printf("###################################\n");
	printf("###################################\n");
	printf("####    1.Play       2.Exit    ####\n");
	printf("###################################\n");
	printf("###################################\n");
	printf("������#\n");
}

void SetMines(char board[][COL], int row, int col) {
	int num = NUMS;
	while (num) {
		//  ��������±�����ף�ע��+1
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			num--;// ע�� num-- λ�ã��п��ܻ�������ͬ������
		}
	}
}


int GetNums(char board[][COL], int row, int col,int x,int y) {
	return board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] + board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}

void ShowBoard(char board[][COL], int row, int col)
{
	printf("  ");
	for (int i = 1; i < col - 1; i++){
		printf(" %2d ", i);
	}
	printf("\n");
	printf("-------------------------------------------\n");
	for (int i = 1; i < row - 1; i++){
		printf("%2d|", i);
		for (int j = 1; j < col - 1; j++){
			printf(" %c |", board[i][j]);
		}
		printf("\n");
		printf("-------------------------------------------\n");
	}
}
void Game() {
	system("cls");
	srand((unsigned long)time(NULL));
	char show_board[ROW][COL];// չʾ������
	char mine_board[ROW][COL];// ɨ������

	memset(show_board, '*', sizeof(show_board));
	memset(mine_board, '0', sizeof(mine_board));

	SetMines(mine_board, ROW, COL);// ����

	int count = (ROW -  2)*(COL - 2) - NUMS; //����û���׵�
	int x = 0;
	int y = 0;

	do {
		ShowBoard(show_board, ROW, COL);// ��ӡ��ʾ���û�������
		printf("��������Ҫɨ������#");
		scanf("%d %d", &x, &y);
		//  ���һ����������λ�ò��Ϸ�
		if (x < 1 || x > ROW - 2 || y  < 1 || y > COL - 2) {
			printf("����λ��Խ�磬���������룡\n");
			continue;
		}
		// ����������������λ���Ѿ��ų�����������ɨ��
		if (show_board[x][y] != '*') {
			printf("��λ���Ѿ����ų���\n");
			continue;
		}

		//  �������mine_board[x][y]  �����'1'��˵���ȵ����ˣ���ը����Ϸ����
		if (mine_board[x ][y] == '1') {
			break;
		}
		// ���㣨x��y���������׵ĸ���
		int  num = GetNums(mine_board, ROW, COL,x,y);
		show_board[x][y] = num + '0';// ע������������  char����
		count--;// Ҫ�ų��Ŀ�λ�ü�1
		system("cls");
	} while (count);// ֻҪû��������ô��һֱѭ��
	// ����ѭ�������ֿ���   1�������� count ==0   2����ը����
	if (count > 0) {
		printf("�㱻ը���ˣ�\n");
		ShowBoard(mine_board, ROW, COL);
	}
	else {
		printf("��ϲ����ͨ����Ϸ��\n");

	}



}