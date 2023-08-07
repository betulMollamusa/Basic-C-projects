#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,boyut;
	char  kontrol='E';
	
	printf("Enter the Size of Matrix please => ");	scanf("%d",&boyut);
	int matris[boyut][boyut];
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			printf("(%d ,%d) => ",i+1,j+1);	
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			printf("%-5d ",matris[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
	      if(i!=j){
		   if(matris[i][j]!=matris[j][i]){
		   	kontrol='H';
		   	 break;
		   }
	      }
		}
	}
	
	if(kontrol=='E')
	printf("The Matrix wich entered is symetric");
	else
	printf("The Matrix wich entered is not Symetric");
	
	return 0;
}

