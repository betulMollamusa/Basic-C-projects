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
        // Kullan�c�dan dizinin elemanlar�n�n al�nmas�
        for (i = 0; i < boyut; i++) {
            printf("%d. elemani giriniz -> ", i + 1);
            scanf("%d", &dizi[i]);
        }

        // Merge Sort algoritmas� ile dizinin s�ralanmas�
        Merge_Sort(dizi, 0, boyut - 1);

        // S�ralanm�� dizinin ekrana yazd�r�lmas�
        for (i = 0; i < boyut; i++)
            printf("%d ", dizi[i]);
    } else {
        printf("50\'den buyuk sayi girilemez ");
    }
    return 0;
}

// �ki alt diziyi birle�tiren fonksiyon
void merge(int arr[], int left, int middle, int right) {
    // Alt dizilerin boyutlar�
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Alt diziler olu�turuluyor
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    i = 0;
    j = 0;
    k = left;

    // �ki alt diziyi birle�tirme i�lemi
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

    // Geriye kalan elemanlar� eklemek
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

// Merge Sort algoritmas� ile diziyi s�ralayan fonksiyon
void Merge_Sort(int arr[], int left, int right) {
    if (left < right) {
        // Dizinin orta noktas�n� bul
        int middle = left + (right - left) / 2;

        // Sol ve sa� alt dizileri s�ralamak i�in Merge_Sort fonksiyonunu �a��r
        Merge_Sort(arr, left, middle);
        Merge_Sort(arr, middle + 1, right);

        // S�ralanm�� alt dizileri birle�tirmek i�in merge fonksiyonunu �a��r
        merge(arr, left, middle, right);
    }
}

