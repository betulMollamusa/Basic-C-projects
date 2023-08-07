#include <stdio.h>

int main(int argc, char *argv[]) {
    double sayi[5];
    int i, max, min;
    double temp;
    char istek;

    for (i = 0; i < 5; i++) {
        printf("\n%d. sayiyi giriniz --> ", i + 1);
        scanf("%lf", &sayi[i]);
    }

    printf("\nartan olarak siralamak icin U , azalan olarak siralamak icin ise D giriniz\n");
    scanf(" %c", &istek);

    if (istek == 'U' || istek == 'u') {
        for (max = 0; max < 4; max++) {
            for (min = max + 1; min < 5; min++) {
                if (sayi[max] > sayi[min]) {
                    temp = sayi[min];
                    sayi[min] = sayi[max];
                    sayi[max] = temp;
                }
            }
        }
        yazdir(sayi); 
    } else if (istek == 'D' || istek == 'd') {
        for (max = 0; max < 4; max++) {
            for (min = max + 1; min < 5; min++) {
                if (sayi[max] < sayi[min]) {
                    temp = sayi[max];
                    sayi[max] = sayi[min];
                    sayi[min] = temp;
                }
            }
        }
		yazdir(sayi);    
    } else {
        printf("yanlis secim yapildi\n");
    }

    return 0;
}

void yazdir(double sayi[]){
	int i;
	for (i = 0; i < 5; i++) {
        	if(i!=4)
        	printf("%.2lf -> ", sayi[i]);
        	else
        	printf("%.2lf ", sayi[i]);
        }
}

