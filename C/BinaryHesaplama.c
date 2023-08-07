#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonksiyon bildirimleri
char* binary(long int);
char* ters(char*);

int main(int argc, char* argv[]) {
    long int sayi;
    char* kod;

    // Kullanýcýdan bir sayý alýnmasý isteniyor
    printf("lutfen bir sayi giriniz ");
    scanf("%li", &sayi);

    // Girilen sayýnýn ikilik tabandaki karþýlýðýný hesaplamak için binary fonksiyonu çaðrýlýyor
    kod = binary(sayi);

    // Sonucun ekrana yazdýrýlmasý
    printf("%li sayisinin binary karsiligi => %s", sayi, kod);

    // Bellekte dinamik olarak ayrýlan hafýzanýn serbest býrakýlmasý
    free(kod);
    return 0;
}

// Bir sayýnýn ikilik tabandaki karþýlýðýný döndüren fonksiyon
char* binary(long int num) {
    long int bolum, temp;
    int kalan, n = 0;
    char sonuc[128] = "", *tersi;

    // Sayý sýfýra eþitse sonucu "0" olarak ayarla
    if (num == 0) {
        sonuc[n++] = '0';
    } else {
        // Sayýnýn ikilik tabandaki karþýlýðýný hesaplamak için döngü
        temp = num;
        while (temp > 0) {
            kalan = temp % 2;
            bolum = temp / 2;
            temp = bolum;

            // Elde edilen ikilik basamaðýný sonuca ekle
            if (kalan == 0)
                sonuc[n] = '0';
            else
                sonuc[n] = '1';

            n++;
        }
    }

    sonuc[n] = '\0';

    // Sonucun tersini almak için ters fonksiyonunu çaðýr
    tersi = ters(sonuc);
    return tersi;
}

// Verilen bir dizinin tersini döndüren fonksiyon
char* ters(char* dizi) {
    // Yeni bir karakter dizisi oluþtur ve bellekte dinamik olarak yer ayýr
    char* tersD = (char*)malloc(strlen(dizi) + 1);

    int u, n = 0;
    u = strlen(dizi);

    // Diziyi tersten kopyala
    for (n = 0; n < u; n++) {
        tersD[n] = dizi[u - n - 1];
    }
    n++;
    tersD[n] = '\0';

    // Ters çevrilen diziyi döndür
    return tersD;
}

