/******************************************************************************
bir firma çalışannlarına mesai ücreti verecektir ve notasyon şu şekilde olacaktır,
- 10 saate kadar saat başı 5 lira
- 10 ile 20 saat arasında saat başı 3 lira
- 20 saatten sonra içinse saat başına 2 lira

*******************************************************************************/
#include <stdio.h>

int main(){
    int mesai;
    printf("Lütfen mesai saatini giriniz:");
    scanf( "%d", &mesai);
    if(mesai<=10){
        printf("ucret= %d", mesai*5);
        
    }
    else if(mesai<=20){   //else if zaten if in 0 olması durumunda çalışacaktır o yüzden iki şarta gerek yok
        printf("ucret= %d", 50 + (mesai - 10) * 3 );
        
    }
    else
        printf("ucret= %d", 10*5 + 10*3 + (mesai-20)*2);
    
}

