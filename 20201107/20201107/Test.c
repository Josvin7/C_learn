#include<stdio.h>
#include<windows.h>


void print(int *arr, int len) {
	while (len--) {
		printf("%d ",*arr);
		arr = arr + 1;
	}
}
int main() {
	int arr[] = { 1, 2, 34, 5, 6, 78, 765 };
	int len = sizeof(arr) / sizeof(arr[0]);
	print(arr, len);
	
	system("pause");
	return 0;
}