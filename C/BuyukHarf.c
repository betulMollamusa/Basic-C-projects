#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char metin[100],harf;	int j,s,i=1;
	printf("metni giriniz => ");	scanf("%s",&metin);
	printf("tum metnin buyuk harfler ile olusmasi icin 1\'i, sadece her bir kelimenin ilk harfinin buyuk olmasi icin 2\'yi giriniz\nSecim-> ");	scanf("%d",&s);
	
	if(s==1){
		for(j=0;j<strlen(metin);j++){
		   if(islower(metin[j])){
			  metin[j]=toupper(metin[j]);
		   }
	   }
	}
	
	//herhangi hazýr bir fonksiyon kullanmadan sadece ilk harfinin büyük olmasý istenirse bu döngü kullanýlabilir
	else if(s==2){
		// Eðer metin dizisinin ilk karakteri küçük harfse, ilk karakteri büyük harfe çevir.
		if(metin[0]>='a' && metin[0]<='z')
	       metin[0]=metin[0]-32;
		while(metin[i]!='\0'){ // Dizinin sonuna kadar gez
		    harf=metin[i];
		    // Eðer gezilen karakter boþluk ' ' ise, kelimenin baþlangýcýný iþaret ediyor.
    		// Dolayýsýyla kelimenin ilk harfini büyük harf yap.
		    if(harf==' '){
		      i++;	harf=metin[i];
		      // Eðer yeni karakter küçük harfse, büyük harfe çevir ve dizide yerine kaydet.
		      if(harf>='a' && harf<='z'){
		  	     harf=harf-32;
		  	     metin[i]=harf;
		        }
		    }
		   i++;
	    }
	}
	
	else{
		printf("yanlis secim...");
	}
	printf("buyuk harflerle duzeltilmis olan kelime : \n%s",metin);
	
	return 0;
}
