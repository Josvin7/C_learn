#include<stdio.h>
#include<windows.h>
int main() {
	int a = 10;
	int *p = &a;
	const int **pp = &p;//**ppָ������ݲ��ܱ䣬Ҳ����a�����ݲ��ܱ�

	pp = 10;
	*pp = 10;
	**pp = 10;
	system("pause");
	return 0;
}