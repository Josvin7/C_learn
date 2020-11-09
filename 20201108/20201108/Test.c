#include<stdio.h>
#include<windows.h>
int strStr(char * haystack, char * needle){
	int lenh = strlen(haystack);
	int lenn = strlen(needle);
	int count = -1;
	
	int i = 0;
	int j = 0;
	while (i < lenh && j < lenn) {
		if (haystack[i] != needle[j]) {
			if (count >= 0) {
				j = 0;// »ØÍË
				i = count + 1;
				count = -1;
			}
			else {
				i++;
			}
			
		}
		else {
			if (count < 0) {
				count = i;
			}
				j++;
				i++;

			
		}
	}
	if (j < lenn) {
		return count;
	}
	return - 1;

}
int main() {


	system("pause");
	return 0;
}