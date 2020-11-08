#include<stdio.h>
#include<windows.h>
int strStr(char * haystack, char * needle){
	int count = 0;
	
	while (*haystack != '\0')
	{

		while (*haystack != '\0' && *haystack != *needle) {
			haystack++;
			count++;
		}
		int j = 0;
		while (*haystack != '\0' && *haystack == *needle){
			haystack++;
			needle++;
			j++;
		}
		if (*needle == '\0') {
			return count;
		}
		count += j;
		needle -= j;
		j = 0;


	}
	return -1;

}
int main() {


	system("pause");
	return 0;
}