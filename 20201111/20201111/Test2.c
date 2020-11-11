#include<stdio.h>
#include<windows.h>

#include<math.h>

int calcNum(int num,int sum,int i) {
	while (num) {
        sum += pow(( num% 10), i);
	    num /= 10;
	}
	return sum;
}

int main2() {
	// 求出0～100000之间的所有“水仙花数”并输出。
    //“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
	int num = 0;
	scanf_s("%d", &num);
	
	int sum = 0;
	int tmp = num;
	int i = 0;
	while (tmp) {
		tmp /= 10;
		i++;
	}
	int ans = calcNum(num, sum,i);
	if (ans == num) {
		printf("是水仙花数");
	}
	else {
		printf("不是水仙花数");

	}
	system("pause");
	return 0;
}