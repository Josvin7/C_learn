#include<stdio.h>
#include<windows.h>

#include<math.h>



int main3() {

	// ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
	int dp[21];
	dp[0] = -1;
	dp[1] = 1;
	dp[2] = 2 + 1;
	dp[3] = 3 + 1 + 1;
	for (int i = 2; i < 21; i++) {
		dp[i] = dp[i - 1] + 2;
	}
	printf("%d", dp[20]);
	system("pause");
	return 0;
}