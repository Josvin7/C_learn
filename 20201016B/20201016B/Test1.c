#include<stdio.h>

int main() {
	int c = 1;
	if (c) {
		goto start;
	}


	printf("实例1\n");
	printf("实例2\n");
	printf("实例3\n");
start:	
	printf("实例4\n");
	printf("实例5\n");
}