#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int transpoze[4][4],matris[4][4];
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("(%d. ,%d. ) value => ",i+1,j+1);	scanf("%d",&matris[i][j]);
			transpoze[j][i]=matris[i][j];//transpozede j->i yerine i->j yazýlmamalý atamada hata vermektedir
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%-5d",transpoze[i][j]);
		}
		printf("\n");
	}
	return 0;
}
