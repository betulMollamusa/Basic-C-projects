#include <stdio.h>
#include <stdlib.h>

void insertion_Sort(int [],int);

int main(int argc, char *argv[]) {
	int boyut,i;
	printf("lutfen gireceginiz dizinin boyutunu giriniz(max 50 olmali)\nBOYUT = ");	scanf("%d",&boyut);
	int dizi[boyut];
	if(boyut<=50){
		
		for(i=0;i<boyut;i++){
			printf("%d. elemani giriniz -> ",i+1);	scanf("%d",&dizi[i]);
		}
		
		insertion_Sort(dizi,boyut);
		
		for(i=0;i<boyut;i++)
		printf("%d ",dizi[i]);
	}
	
	else
	printf("50\'den buyuk sayi girilemez ");
	return 0;
}

void insertion_Sort(int arr[], int n){
	for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Aranan elemanýn doðru konumunu bulana kadar diziyi kaydýrma iþlemi
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
