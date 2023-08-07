#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(int argc, char** argv) {
    char aranan, cumle[256];
    int i,L,s=0;
    printf("enter the Sentence => ");
    gets(cumle);
    L=strlen(cumle);
    printf("enter the word wich will search => ");
	aranan=getchar();
    
    for(i=0;i<L;i++){
    	if(cumle[i]==aranan){
    		s++;
		}
	}
	printf("the number of word that you search of it %d",s);
	return 0;
}
