#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int odul = 0; // Kazan�lan �d�l puan�
    srand(time(NULL)); // Rastgelelik i�in zaman� kullanarak rastgele say� �retimi
    int i = 1;

    // 5 defa zar atma d�ng�s�
    while (i <= 5) {
        int sayi = rand() % 6 + 1; // 1 ile 6 aras�nda rastgele bir zar de�eri elde et
        printf("1 ile 6 aras�nda %d. zar at���n� yap�n�z: ", i);
        int tahmin;
        scanf("%d", &tahmin);

        // Kullan�c�n�n tahminini kontrol et ve sonucu ekrana yazd�r
        if (tahmin == sayi) {
            printf("\033[0;32mTebrikler! %d. zar at���n�z do�ru...\n", i); //ye�il renkle yazar
            odul++; // Do�ru tahmin yap�ld��� i�in �d�l puan�n� art�r
        } else {
            printf("\033[0;31m%d. at��ta yanl�� bildiniz\n", i);//k�rm�z� renkte yazd�r�r
        }
        printf("\033[0m");//beyaz renk
        i++;
    }

    // Kazan�lan �d�l� ekrana yazd�r
    if (odul > 0) {
        printf("\033[0;32m�D�L�N�Z %d puan Tebrikler\n", odul * 1000);
    } else {
        printf("\033[0;31mNe yaz�k ki herhangi bir �d�l veremiyoruz\n");
    }

    return 0;
}

