#include  "game.h"
void Menu() {
	printf("###################################\n");
	printf("###################################\n");
	printf("####    1.Play       2.Exit    ####\n");
	printf("###################################\n");
	printf("###################################\n");
	printf("请输入#\n");
}

void SetMines(char board[][COL], int row, int col) {
	int num = NUMS;
	while (num) {
		//  随机生成下标放置雷，注意+1
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			num--;// 注意 num-- 位置，有可能会生成相同的坐标
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
	char show_board[ROW][COL];// 展示的数组
	char mine_board[ROW][COL];// 扫描数组

	memset(show_board, '*', sizeof(show_board));
	memset(mine_board, '0', sizeof(mine_board));

	SetMines(mine_board, ROW, COL);// 布雷

	int count = (ROW -  2)*(COL - 2) - NUMS; //多少没有雷的
	int x = 0;
	int y = 0;

	do {
		ShowBoard(show_board, ROW, COL);// 打印显示给用户的数组
		printf("请输入你要扫的坐标#");
		scanf("%d %d", &x, &y);
		//  情况一：输入坐标位置不合法
		if (x < 1 || x > ROW - 2 || y  < 1 || y > COL - 2) {
			printf("输入位置越界，请重新输入！\n");
			continue;
		}
		// 情况二：输入的坐标位置已经排除，不能重新扫雷
		if (show_board[x][y] != '*') {
			printf("该位置已经被排除！\n");
			continue;
		}

		//  情况三：mine_board[x][y]  里边是'1'，说明踩到雷了，被炸死游戏结束
		if (mine_board[x ][y] == '1') {
			break;
		}
		// 计算（x，y）附近的雷的个数
		int  num = GetNums(mine_board, ROW, COL,x,y);
		show_board[x][y] = num + '0';// 注意数组类型是  char类型
		count--;// 要排除的空位置减1
		system("cls");
	} while (count);// 只要没有排完那么就一直循环
	// 跳出循环有两种可能   1、排完了 count ==0   2、被炸死了
	if (count > 0) {
		printf("你被炸死了！\n");
		ShowBoard(mine_board, ROW, COL);
	}
	else {
		printf("恭喜，你通过游戏！\n");

	}



}