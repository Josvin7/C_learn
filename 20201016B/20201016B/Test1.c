#include<stdio.h>

int main() {
	int c = 1;
	if (c) {
		goto start;
	}


	printf("ʵ��1\n");
	printf("ʵ��2\n");
	printf("ʵ��3\n");
start:	
	printf("ʵ��4\n");
	printf("ʵ��5\n");
}