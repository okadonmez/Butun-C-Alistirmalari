#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void diziyiYazdir();
void diziyiTerstenYazdir();
void maxMinYazdir(char c);
void sirala(char c);
void istatistikGoster();

int dizi[10];//Global deðiþken

int main(){

    int sayi=0;
    int dongudevam=1;
	srand(time(NULL));

    for(int i=0;i<10;i++){
        while(dongudevam){
            sayi=rand()%50;
            int j=0;
            while(j<i+1){
                if(sayi==dizi[j]){ 
                  break;
                } 
                j++;
            }
            
			if(i+1==j){
                dizi[i]=sayi;
              break;
            }
        }
	}
    
	
    printf("3 - Max-Min Yazdir");
	int d;
	scanf("%d",&d);
	
	
	if(d==3){
		maxMinYazdir(getchar());//Buradaki getchar kodu çalýþtýrdý ama bunu silip c yazýnca hata veriyor
    }
	return 0;
}


void maxMinYazdir(char c){
    
	int enbuyuk=0;
    int enkucuk=0;
	
	printf("Seciminiz (K)ucuk/(B)uyuk: ");
    
    
	if(c=='K'){
        enkucuk=dizi[0];
	    for(int i=0;i<10;i++){
	        if(enkucuk>dizi[i]){
                enkucuk=dizi[i];
	      }
        }
        printf("En Kucuk Sayi %d'dir.",enkucuk);
    }
    else if(c=='B'){
   	    enbuyuk=dizi[0];
        for(int i=0;i<10;i++){
        	if(enbuyuk<dizi[i]){
                enbuyuk=dizi[i];
	        }
        }
        printf("En Buyuk Sayi %d'dir.",enbuyuk);
    }
    else{
   	    printf("Gecersiz Karakter Girdiniz");
    }
}

