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
	
	//herhangi haz�r bir fonksiyon kullanmadan sadece ilk harfinin b�y�k olmas� istenirse bu d�ng� kullan�labilir
	else if(s==2){
		// E�er metin dizisinin ilk karakteri k���k harfse, ilk karakteri b�y�k harfe �evir.
		if(metin[0]>='a' && metin[0]<='z')
	       metin[0]=metin[0]-32;
		while(metin[i]!='\0'){ // Dizinin sonuna kadar gez
		    harf=metin[i];
		    // E�er gezilen karakter bo�luk ' ' ise, kelimenin ba�lang�c�n� i�aret ediyor.
    		// Dolay�s�yla kelimenin ilk harfini b�y�k harf yap.
		    if(harf==' '){
		      i++;	harf=metin[i];
		      // E�er yeni karakter k���k harfse, b�y�k harfe �evir ve dizide yerine kaydet.
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
