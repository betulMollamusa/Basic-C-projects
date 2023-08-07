#include <stdio.h>
#include <stdlib.h>

void merge(int [], int, int, int);
void Merge_Sort(int [], int, int);

int main(int argc, char *argv[]) {
    int boyut, i;
    printf("lutfen gireceginiz dizinin boyutunu giriniz (max 50 olmali)\nBOYUT = ");
    scanf("%d", &boyut);
    int dizi[boyut];

    if (boyut <= 50) {
        // Kullanýcýdan dizinin elemanlarýnýn alýnmasý
        for (i = 0; i < boyut; i++) {
            printf("%d. elemani giriniz -> ", i + 1);
            scanf("%d", &dizi[i]);
        }

        // Merge Sort algoritmasý ile dizinin sýralanmasý
        Merge_Sort(dizi, 0, boyut - 1);

        // Sýralanmýþ dizinin ekrana yazdýrýlmasý
        for (i = 0; i < boyut; i++)
            printf("%d ", dizi[i]);
    } else {
        printf("50\'den buyuk sayi girilemez ");
    }
    return 0;
}

// Ýki alt diziyi birleþtiren fonksiyon
void merge(int arr[], int left, int middle, int right) {
    // Alt dizilerin boyutlarý
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Alt diziler oluþturuluyor
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    i = 0;
    j = 0;
    k = left;

    // Ýki alt diziyi birleþtirme iþlemi
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Geriye kalan elemanlarý eklemek
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort algoritmasý ile diziyi sýralayan fonksiyon
void Merge_Sort(int arr[], int left, int right) {
    if (left < right) {
        // Dizinin orta noktasýný bul
        int middle = left + (right - left) / 2;

        // Sol ve sað alt dizileri sýralamak için Merge_Sort fonksiyonunu çaðýr
        Merge_Sort(arr, left, middle);
        Merge_Sort(arr, middle + 1, right);

        // Sýralanmýþ alt dizileri birleþtirmek için merge fonksiyonunu çaðýr
        merge(arr, left, middle, right);
    }
}

