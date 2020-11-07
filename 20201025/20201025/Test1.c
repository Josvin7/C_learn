#include<stdio.h>
#include<windows.h>

int bin_search(int arr[], int left, int right, int key) {
	int mid = 0;
	while (left <= right) {
        mid = left + (right - left) / 2;
		if (arr[mid] > key) {
			right = mid - 1;
		}
		else if (arr[mid] < key) {
			left = mid + 1;

		}
		else {
			return mid;
		}
		
	}return -1;
}
int main()  {
	int array[10] = { 1, 2, 34, 56, 7, 53, 24, 56, 4, 56 };
	array[10] = 5 * 2;
	int num = 0;

	while (1) {
printf("请输入你要查找的数字\n");
	scanf_s("%d", &num);
	int ans = bin_search(array, 0, 9, num);
	if (ans == -1) {
		printf("找不到");
	}
	else {
		printf("%d\n",ans);

	}
	}
	
	system("pause");
	return 0;
}