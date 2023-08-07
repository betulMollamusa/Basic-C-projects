#include <stdio.h>

void DuzUcgenCiz(int);
void TersUcgenCiz(int);



int main() {
    int satirSayisi;

    printf("Satir sayisini giriniz: ");
    scanf("%d", &satirSayisi);

    printf("Duz ucgen:\n");
    DuzUcgenCiz(satirSayisi);

    printf("Ters ucgen:\n");
    TersUcgenCiz(satirSayisi);

    return 0;
}

// Düz üçgen çizen fonksiyon
void drawDuzUcgen(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Ters üçgen çizen fonksiyon
void drawTersUcgen(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

