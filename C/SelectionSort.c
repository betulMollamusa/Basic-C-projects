#include <stdio.h>
#include <stdlib.h>

void selection_Sort(int [],int);

int main(int argc, char *argv[]) {
	int boyut,i;
	printf("lutfen gireceginiz dizinin boyutunu giriniz(max 50 olmali)\nBOYUT = ");	scanf("%d",&boyut);
	int dizi[boyut];
	if(boyut<=50){
		
		for(i=0;i<boyut;i++){
			printf("%d. elemani giriniz -> ",i+1);	scanf("%d",&dizi[i]);
		}
		
		selection_Sort(dizi,boyut);
		
		for(i=0;i<boyut;i++)
		printf("%d ",dizi[i]);
	}
	
	else
	printf("50\'den buyuk sayi girilemez ");
	return 0;
}

void selection_Sort(int arr[], int n){
	for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
