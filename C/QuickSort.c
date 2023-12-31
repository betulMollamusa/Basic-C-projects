#include <stdio.h>
#include <stdlib.h>


int partition(int [], int, int);
void swap(int *, int *);
void Quick_Sort(int [], int, int);

int main(int argc, char *argv[]) {
    int boyut, i;
    printf("lutfen gireceginiz dizinin boyutunu giriniz (max 50 olmali)\nBOYUT = ");
    scanf("%d", &boyut);
    int dizi[boyut];

    if (boyut <= 50) {
        // Kullanıcıdan dizinin elemanlarının alınması
        for (i = 0; i < boyut; i++) {
            printf("%d. elemani giriniz -> ", i + 1);
            scanf("%d", &dizi[i]);
        }

        // Quick Sort algoritması ile dizinin sıralanması
        Quick_Sort(dizi, 0, boyut - 1);

        // Sıralanmış dizinin ekrana yazdırılması
        for (i = 0; i < boyut; i++)
            printf("%d ", dizi[i]);
    } else {
        printf("50\'den buyuk sayi girilemez ");
    }
    return 0;
}

// İki elemanın yerlerini değiştiren fonksiyon
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Dizi parçalama işlemini yapan fonksiyon
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick Sort algoritması ile diziyi sıralayan fonksiyon
void Quick_Sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        Quick_Sort(arr, low, pi - 1);
        Quick_Sort(arr, pi + 1, high);
    }
}

