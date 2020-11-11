#param warning(disable:4996)
#include<stdio.h>
#include<windows.h> 


/*
gets()函数总结：
（1）gets() 从标准输入设备读取字符串，以回车结束读取，使用'\0'结尾，回车符'\n'被舍弃没有遗留在缓冲区。
（2）可以用来输入带空格的字符串。
（3）可以无限读取，不会判断上限，因此使用gets不安全，可能会造成溢出
*/

#include<string.h>
int main2()
{
	int i = 0, n, t;
	char str[100];
	//gets_s(str);
	while (gets(str))
	{
		n = strlen(str) - 1;
		while (i <= n)
		{
			putchar(str[n]);
			n--;
		}
	}
	return 0;
}


void reverseStr(char * str, int len){
	char *last = str + len - 1;
	while (str < last) {
		char tmp = *str;
		*str = *last;
		*last = tmp;
		str++;
		last--;
	}
}
int main() {
	char str[100];
	gets(str);
	int len = strlen(str);
	//char *first = str;
	//char *last = str + len - 1;
	
	reverseStr(str, len);
	printf("%s\n",str);
	system("pause");
	return 0;
}