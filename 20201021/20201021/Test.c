#include<stdio.h>
#include<windows.h>
#pragma warning(distable:4996)
/*

*/







int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 5;
	int mid = 0;
	for (; left <= right;) {
		mid = left + (right - left) / 2;
		if (arr[mid] > key) {
			right = mid - 1;
		}
		else if (arr[mid] < key) {
			left = mid + 1;
		}
		else break;
	}
	if (left <= right) {
		printf("找到了，下标是=%d", mid);
	}
	else {
		printf("找bu到了");

	}
	system("pause");
	return 0;
}
void toSout(int num) {
	if (num > 0) {
		printf("分别是：%d\n", num%10);
	}
	toSout(num / 10);
	//int tmp = num % 10;
	

}
int jiecheng(int n) {
	if (n == 1) {
		return n;
	}
	return n*jiecheng(n - 1);
}
int MyStrlen(char  *str) {
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1 + MyStrlen(str+1);
	}
}
int main3() {
	int ans = jiecheng(8);
	printf("%d", ans);
	char arr[20] = "sdfghj";
	int len = MyStrlen(arr);
	printf("%d", len);
	system("pause");
	return 0;

}
void toprf(int num) {
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d = %d  ", i, j, i*j);
		}
		printf("\n");
	}
}
int main2() {
	int num;
	scanf_s("%d", &num);
	//toSout(num);
	toprf(num);
	system("pause");
	return 0;
}



void swap(int *pa,int *pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;

}
int main1() {
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a = %d,b = %d\n", a,b);
	system("pause");
	return 0;
}