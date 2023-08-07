#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int boyut;
	
	printf("matris boyutunu giriniz : ");
	scanf("%d",&boyut);
	
	int i,j,FirstMatrix[boyut][boyut],SecondMatrix[boyut][boyut],TotalMatrix[boyut][boyut];
	
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			printf("please enter the (%d. , %d.) number of the first matrix-> ",i+1,j+1);
			scanf("%d",&FirstMatrix[i][j]);
			printf("please enter the (%d. , %d.) number of the second matrix-> ",i+1,j+1);
			scanf("%d",&SecondMatrix[i][j]);
			TotalMatrix[i][j]=FirstMatrix[i][j]+SecondMatrix[i][j];
		}
	}
	
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			printf("%-6d",TotalMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
