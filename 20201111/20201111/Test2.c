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
	// ���0��100000֮������С�ˮ�ɻ������������
    //��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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
		printf("��ˮ�ɻ���");
	}
	else {
		printf("����ˮ�ɻ���");

	}
	system("pause");
	return 0;
}