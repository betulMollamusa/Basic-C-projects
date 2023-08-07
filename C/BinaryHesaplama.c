#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonksiyon bildirimleri
char* binary(long int);
char* ters(char*);

int main(int argc, char* argv[]) {
    long int sayi;
    char* kod;

    // Kullan�c�dan bir say� al�nmas� isteniyor
    printf("lutfen bir sayi giriniz ");
    scanf("%li", &sayi);

    // Girilen say�n�n ikilik tabandaki kar��l���n� hesaplamak i�in binary fonksiyonu �a�r�l�yor
    kod = binary(sayi);

    // Sonucun ekrana yazd�r�lmas�
    printf("%li sayisinin binary karsiligi => %s", sayi, kod);

    // Bellekte dinamik olarak ayr�lan haf�zan�n serbest b�rak�lmas�
    free(kod);
    return 0;
}

// Bir say�n�n ikilik tabandaki kar��l���n� d�nd�ren fonksiyon
char* binary(long int num) {
    long int bolum, temp;
    int kalan, n = 0;
    char sonuc[128] = "", *tersi;

    // Say� s�f�ra e�itse sonucu "0" olarak ayarla
    if (num == 0) {
        sonuc[n++] = '0';
    } else {
        // Say�n�n ikilik tabandaki kar��l���n� hesaplamak i�in d�ng�
        temp = num;
        while (temp > 0) {
            kalan = temp % 2;
            bolum = temp / 2;
            temp = bolum;

            // Elde edilen ikilik basama��n� sonuca ekle
            if (kalan == 0)
                sonuc[n] = '0';
            else
                sonuc[n] = '1';

            n++;
        }
    }

    sonuc[n] = '\0';

    // Sonucun tersini almak i�in ters fonksiyonunu �a��r
    tersi = ters(sonuc);
    return tersi;
}

// Verilen bir dizinin tersini d�nd�ren fonksiyon
char* ters(char* dizi) {
    // Yeni bir karakter dizisi olu�tur ve bellekte dinamik olarak yer ay�r
    char* tersD = (char*)malloc(strlen(dizi) + 1);

    int u, n = 0;
    u = strlen(dizi);

    // Diziyi tersten kopyala
    for (n = 0; n < u; n++) {
        tersD[n] = dizi[u - n - 1];
    }
    n++;
    tersD[n] = '\0';

    // Ters �evrilen diziyi d�nd�r
    return tersD;
}

