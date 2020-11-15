#include<stdio.h>
#include<windows.h>
int main() {
	int a = 10;
	int *p = &a;
	const int **pp = &p;//**pp指向的内容不能变，也就是a的内容不能变

	pp = 10;
	*pp = 10;
	**pp = 10;
	system("pause");
	return 0;
}