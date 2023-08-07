#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char metin[100],temp;
	int m,n,uzunluk;
	printf("lutfen metni giriniz => ");	gets(metin);
	uzunluk=strlen(metin);
	for(m=0;m<uzunluk-1;m++){
		for(n=m+1;n<uzunluk;n++){
			if(metin[m]>metin[n]){
				temp=metin[m];
				metin[m]=metin[n];
				metin[n]=temp;
			}
		}
	}
	printf("harflerin alfabetik sirasi => \n%s",metin);
	return 0;
}
