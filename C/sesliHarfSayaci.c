#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sesli[]={'a','A','e','E','o','O','u','U','i','I'},word[256];
	
	int i,j,length,counter=0;
	
	printf("please enter the word => ");	gets(word);
	length=strlen(word);
	for(i=0;i<length;i++){
		for(j=0;j<10;j++){
			if(word[i]==sesli[j]){
			 counter++;
			 break;
			}
		}
	}
	
	printf("the number of vowel in word that entered by you --> %d",counter);
	return 0;
}
