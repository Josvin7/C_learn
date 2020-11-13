#include<stdio.h>
#include<windows.h>
int main() {
	int n = 13;
	// 先打印上三角
	for (int i = 0; i < n/2; i++) {
		for (int j = 0; j < n / 2 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= 2*i;k++) {
			printf("*");

		}
		printf("\n");
	}
	// 打印下三角
	for (int i = n/2; i < n; i++) {
		for (int j = 0; j < i-n/2; j++) {
			printf(" ");
		}
		for (int k = 0; k <= 2*n-2*i-2; k++) {
			printf("*");

		}
		printf("\n");
	}

	system("pause");
	return 0;
}