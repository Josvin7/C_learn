#include<stdio.h>
#include<windows.h>

#include<math.h>



int main3() {

	// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
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