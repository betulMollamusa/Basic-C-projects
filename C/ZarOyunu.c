#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int odul = 0; // Kazanýlan ödül puaný
    srand(time(NULL)); // Rastgelelik için zamaný kullanarak rastgele sayý üretimi
    int i = 1;

    // 5 defa zar atma döngüsü
    while (i <= 5) {
        int sayi = rand() % 6 + 1; // 1 ile 6 arasýnda rastgele bir zar deðeri elde et
        printf("1 ile 6 arasýnda %d. zar atýþýný yapýnýz: ", i);
        int tahmin;
        scanf("%d", &tahmin);

        // Kullanýcýnýn tahminini kontrol et ve sonucu ekrana yazdýr
        if (tahmin == sayi) {
            printf("\033[0;32mTebrikler! %d. zar atýþýnýz doðru...\n", i); //yeþil renkle yazar
            odul++; // Doðru tahmin yapýldýðý için ödül puanýný artýr
        } else {
            printf("\033[0;31m%d. atýþta yanlýþ bildiniz\n", i);//kýrmýzý renkte yazdýrýr
        }
        printf("\033[0m");//beyaz renk
        i++;
    }

    // Kazanýlan ödülü ekrana yazdýr
    if (odul > 0) {
        printf("\033[0;32mÖDÜLÜNÜZ %d puan Tebrikler\n", odul * 1000);
    } else {
        printf("\033[0;31mNe yazýk ki herhangi bir ödül veremiyoruz\n");
    }

    return 0;
}

