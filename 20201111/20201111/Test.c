#include<stdio.h>
#include<windows.h>

int main1() {

	//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������  24,690

	int num = 5;
	int a = 0;
	scanf_s("%d",&a);
	int sum = 0;

  	int tmp = a;
	while (num--) {
		
		sum += a;
		a = a * 10 + tmp;
		
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}