#include "game.h"

void Menu() {
	printf("######################\n");
	printf("## 1.play  2.Exit   ##\n");
	printf("######################\n");
	printf("Please Enter#");
}


void DrawBoard(char board[][COL],int  row, int col) {

	printf("   1| 2| 3| \n");
	printf("------------------\n");
	for (int i = 0; i < row; i++) {
		printf("%d|", i + 1);
		for (int j = 0; j < col; j++) {
			printf(" %c|",board[i][j]);
		}
		printf("\n------------------\n");

	}

}
void PlayMove(char  board[][COL], int  row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("Please Enter Your Pos#");
		scanf("%d %d", &x, &y);
		//  �ж���������ֵ�Ƿ�����ȷ��
		if (x < 1 || x > 3 || y < 1 || y > 3) {
			printf("Pos Error\n");
			continue;
		}
		// �ж���������λ���Ƿ��Ѿ���Ԫ��
		if (board[x - 1][y - 1] != ' ') {
			printf("Chress Exist! \n");
			continue;
		}
		board[x - 1][y - 1] = P_COLOR;// ע�������� ����������ֵ��һ
		return ;
		
	}
}

char Judge(char board[][COL], int  row, int col) {
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}

	for (int i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}


	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];

	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[1][1];

	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return N_COLOR;
			}
		}
	}
	return B_COLOR;

}
void ComputerMove(char board[][COL], int  row, int col) {
	while (1) {
		int x = rand() % row;
		int y = rand() % col;
		// �ж��Ƿ��Ѿ�������
		if (board[x][y] != ' ') {
			printf("Chress Exist! \n");
			continue;
		}
		board[x][y] = C_COLOR;// ע�������� ���ü�һ
		break;
	}
}
void Game() {
	srand((unsigned long)time(NULL));
	char board[ROW][COL];
	memset(board,  ' ', sizeof(board)); //��ptrָ����ڴ���ǰnum���ֽ�����Ϊָ��ֵ
	char win = '\0';
	do{
		DrawBoard(board, ROW, COL);//��������
		PlayMove(board, ROW, COL);// �������
		win = Judge(board, ROW, COL);// �ж� ˭Ӯ�˻���ƽ�ֻ����Ƿ����
		if (win != N_COLOR) {
			break;
		}
		ComputerMove(board, ROW, COL);// ������
		win = Judge(board, ROW, COL); // �ж�
		if (win != N_COLOR) {
			break;
		}

	} while (1);
	switch (win) {
	case P_COLOR:
		printf("you win!\n");
		break;
	case C_COLOR:
		printf("you lose!\n");
		break;
	case B_COLOR:
		printf("ƽ��\n");
		break;
	default:
		break;
	}
	// ����ӡ������
	DrawBoard(board, ROW, COL);
}