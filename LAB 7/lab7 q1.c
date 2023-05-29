#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[15],str2[15];
	int kon;
	printf("please enter the first word: ");
	scanf("%s",str1);
	printf("please enter the second word: ");
	scanf("%s",str2);
	kon=strcmp(str1,str2);
	if(kon<0)
		printf("word 1 is less than word 2..");
	else if(kon>0)
		printf("word 2 is less than word 1..");
	else
		printf("word 1 and word 2 are equal..");		
	
	return 0;
}
