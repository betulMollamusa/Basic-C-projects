#include <stdio.h>
#include <stdlib.h>


void Bubble_Sort(int [], int);

int main(int argc, char *argv[]) {
    int boyut, i;
    printf("lutfen gireceginiz dizinin boyutunu giriniz (max 50 olmali)\nBOYUT = ");
    scanf("%d", &boyut);
    int dizi[boyut];
    
    if (boyut <= 50) {
        
        for (i = 0; i < boyut; i++) {
            printf("%d. elemani giriniz -> ", i + 1);
            scanf("%d", &dizi[i]);
        }
        
        // Bubble Sort algoritmasý ile dizinin sýralanmasý
        Bubble_Sort(dizi, boyut);
        
        // Sýralanmýþ dizinin ekrana yazdýrýlmasý
        for (i = 0; i < boyut; i++)
            printf("%d ", dizi[i]);
    } else {
        printf("50\'den buyuk sayi girilemez ");
    }
    
    return 0;
}

// Bubble Sort algoritmasý ile diziyi sýralayan fonksiyon
void Bubble_Sort(int D[], int n) {
    int temp, i, j;
    
    // Diziyi sýralamak için iki adet döngü
    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - 1; i++) {
            // Komþu elemanlarýn karþýlaþtýrýlmasý ve gerektiðinde yer deðiþtirme
            if (D[i] > D[i + 1]) {
                temp = D[i];
                D[i] = D[i + 1];
                D[i + 1] = temp;
            }
        }
    }
}

