#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char *inputString,*reverseString;
	inputString=(char *)malloc(20*sizeof(char));
	reverseString=(char *)malloc(20*sizeof(char));
	printf("Hay nhap mot chuoi: ");
	gets(inputString);
	printf("Input: %s\n",inputString);
	strrev(inputString);
	strcpy(reverseString,inputString);
	printf("Output: %s",reverseString);
	
	return 0;
	
}