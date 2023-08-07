#include <stdio.h>
#include <time.h>

// Fonksiyon bildirimi
void swapValues(int *, int *);
void showArray(int *, int);
void sortArray(int *, int, int);
void delay(int);

int main(void) {
    int array[] = {-2, 88, 10, -15, 100, 98, 94, 0, 35, -7};
    int dim = 10, demo;
    printf("lutfen demo modu icin 0 giriniz veya tum adimlari da gormek isterseniz 1 giriniz");
    scanf("%d", &demo);

    printf("dizinin ilk hali >> \n");
    showArray(array, dim);
    sortArray(array, dim, demo);
    printf("dizinin sirali hali >> \n");
    showArray(array, dim);
    return 0;
}

// Ýki deðeri takas eden fonksiyon
void swapValues(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// Diziyi ekrana yazdýran fonksiyon
void showArray(int *ptr1, int dim) {
    int i = 0;
    for (; i < dim; i++) {
        printf("%3d ", *(ptr1 + i));
    }
    printf("\n\n");
}

// Diziyi sýralayan fonksiyon
void sortArray(int *ptr1, int dim, int demo) {
    int i, j;
    for (i = 0; i < dim - 1; i++) {
        for (j = i + 1; j < dim; j++) {
            if (*(ptr1 + i) > *(ptr1 + j))
                swapValues(ptr1 + i, ptr1 + j);

            // Demo modu için adýmlarý ekrana yazdýrma ve gecikme
            if (demo == 1) {
                showArray(ptr1, dim);
                delay(500);
            }
        }
        if (demo == 1)
            printf("-----------------\n");
    }
}

// Belirli bir süre geciktiren fonksiyon
void delay(int NOMS) {
    clock_t start_time = clock();
    while (clock() < start_time + NOMS);
}

