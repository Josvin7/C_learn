#include<stdio.h>
#include<windows.h>

/*


void bubble_sort(int arr[], int sz) {
	int flag = 0;
	for (int i = 0; i < sz; i++) {

		for (int j = 0; j < sz - i-1; j++) {
			if (arr[j] < arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0) {
			return;
		}
	}

}
int main1(){

	int arr[] = {2,3,5,25,6,6,4,413,45,767,23,54};
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)  {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}


void swap(int  arr1[], int arr2[], int sz) {
	for (int i = 0; i < sz; i++) {
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
int main(){

	int arr1[] = { 2, 3, 5, 25, 6, 6, 4, 413, 45, 767, 23, 54 };
	int arr2[] = { 5, 56, 5, 265, 56, 46, 24, 43, 5, 67, 3, 4 };

	int sz = sizeof(arr1) / sizeof(arr1[0]);

	swap(arr1, arr2, sz);
	for (int i = 0; i < sz; i++)  {
		printf("%d ", arr1[i]);
	}
	system("pause");
	return 0;
}

void init(int arr[], int sz) {
	memset(arr, 0, 100 * sizeof(int));
}
void print(int arr[], int sz) {
for (int i = 0; i < sz; i++)  {
		printf("%d ", arr[i]);
	}
printf("\n");
}
void reverse(int arr[], int sz) {
	int first = 0;
	int last = sz - 1;
	for (; first < last;) {
		int tmp = arr[first];
		arr[first] = arr[last];
		arr[last] = tmp;
		first++;
		last--;
	}
}
int main(){
	int sz = 100;
	int arr[100];
	init(arr, 100);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);

	
	system("pause");
	return 0;
}



int main(){
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int c = a ^ b; // 相同为0，不同为1
	printf("%d\n", c);

	int count = 0;
	while (c) {
		c = c &(c - 1);
		count++;
	}
	printf("%d\n", count);

	system("pause");
	return 0;
}

int main(){
	int a = 0;
	scanf_s("%d", &a);
	int num = a;
	while (a) {
		printf("%d ",a&1);
		a = a >> 2;
	}
	printf("\n");
	//int num = a;
	num = num >> 1;
	while (num) {
		printf("%d ", num & 1);
		num = num >> 2;
	}	printf("\n");

	system("pause");
	return 0;
}
int main(){
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a,b);

	
	return 0;
}
*/


int i;
int main()
{
	i--;
	printf("%d ", i);
	printf("%d ", sizeof i);

	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}system("pause");
	return 0;
}
