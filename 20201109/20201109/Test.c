#param warning(disable:4996)
#include<stdio.h>
#include<windows.h> 


/*
gets()�����ܽ᣺
��1��gets() �ӱ�׼�����豸��ȡ�ַ������Իس�������ȡ��ʹ��'\0'��β���س���'\n'������û�������ڻ�������
��2����������������ո���ַ�����
��3���������޶�ȡ�������ж����ޣ����ʹ��gets����ȫ�����ܻ�������
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