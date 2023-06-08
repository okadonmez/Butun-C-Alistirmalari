#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
	int ogrNum;
    char isim[50];
    char soyad[50];
    float vizeNotu;
    float finalNotu;
    float odev1;
    float odev2;
    float DonemSonuNotu;
};

int main(){

	FILE *Fpointer; //dosya göstericisi
	FILE *RaporPointer; //rapor göstericisi
    
	int menu;
	int dur=1;//Menüler arasý geçiþ yapmayý kolaylaþtýrmak için
	
	struct ogrenci ogrBilgi[100];
	
    int ogrenciSayisi;
	float vizeOrt=0;
	float finalOrt=0;
	float odev1Ort=0;
	float odev2Ort=0;
	float donemSonuOrt=0;
	
	while(dur){
	
		printf("\tMenu\n--------------------\n");
        printf("1) Ogrenci Ekleme\n2) Ogrenci Arama (Numara Ile)\n3) Rapor Yazdir\n");
	    scanf(" %d",&menu);
	    system("CLS");
	        
		if(menu==1){//Öðrencileri Sisteme(Dizilere) Kayýt ediyor. Menü-2 için tekrar dosya okutmaya gerek yok.
			
			if((Fpointer=fopen("C:ogrenciListesi.txt","r")) == NULL){
		        puts("Dosya acilmadi!\n"); 
		        exit(1);
	        }//Not: Hocam ogrenciListesinin sizin bilgisayarýnýzda hangi dosyada olduðunu bilmediðimden C: nin tam yolunu girmedim. Ben .c dosyasýnýn bulunduðu klasöre atýp kullandým.
			else{
			
				int i=0;
    	    	
    	    	for(;i<83;i++){
    	    		
					fscanf(Fpointer,"%d %s %s %f %f %f %f\n",&ogrBilgi[i].ogrNum,ogrBilgi[i].isim,ogrBilgi[i].soyad,&ogrBilgi[i].vizeNotu,&ogrBilgi[i].finalNotu,&ogrBilgi[i].odev1,&ogrBilgi[i].odev2);
					
					vizeOrt=ogrBilgi[i].vizeNotu+vizeOrt;
	
					finalOrt=ogrBilgi[i].finalNotu+finalOrt;
			        
					odev1Ort=ogrBilgi[i].odev1+odev1Ort;
			    
					odev2Ort=ogrBilgi[i].odev2+odev2Ort;
					
					ogrBilgi[i].DonemSonuNotu=((ogrBilgi[i].vizeNotu*25/100)+(ogrBilgi[i].finalNotu*40/100)+(ogrBilgi[i].odev1*15/100)+(ogrBilgi[i].odev2*20/100));

					donemSonuOrt=ogrBilgi[i].DonemSonuNotu+donemSonuOrt;		
            	}
            	
				ogrenciSayisi=i;	
            	vizeOrt=vizeOrt/i;
            	finalOrt=finalOrt/i;
            	odev1Ort=odev1Ort/i;
            	odev2Ort=odev2Ort/i;
            	donemSonuOrt=donemSonuOrt/i;
				
				fclose(Fpointer);//Dosyayý kapatýr
			}
		}      
		else if(menu==2){
				
	    	int numaraGir;
			
			printf("Aranacak Ogrenci Numarasi Giriniz: ");
			scanf("%d",&numaraGir);
			getchar();//Scanf için boþ alan
	
		    int i=0;
		    int a;//Alttaki for döngüsü dýþýnda i deðerini tutuyor ve girilen öðrenci numarasýnýn sistemde olup olmadýðýný kontrol ediyor
				
			for(;ogrBilgi[i].ogrNum!='\0';i++){
				if(numaraGir==ogrBilgi[i].ogrNum){
					printf("Ogrenci Numarasi: %d\n",ogrBilgi[i].ogrNum);
					printf("Isim: %s\n",ogrBilgi[i].isim);
					printf("Soyad: %s\n",ogrBilgi[i].soyad);
					printf("Vize Sonucu: %.2f\n",ogrBilgi[i].vizeNotu);
					printf("Final Sonucu: %.2f\n",ogrBilgi[i].finalNotu);
					printf("Odev1 Sonucu: %.2f\n",ogrBilgi[i].odev1);
					printf("Odev2 Sonucu: %.2f\n",ogrBilgi[i].odev2);
					printf("Donem Sonu Notu: %.2f\n",ogrBilgi[i].DonemSonuNotu);
				    a=i;  
				}
			}
			dur=0;//Ana menüye tuþ yardýmý ile geçmek için
			
			if(numaraGir!=ogrBilgi[a].ogrNum){
			    printf("\nKayit Bulunamadi...\nAna menuye donmek icin 'M' tusuna basiniz: ");
			}
			else{
			    printf("Ana menuye donmek icin 'M' tusuna basiniz: ");
			}
			
			int tamam=1;
			char geriDon;
			
			for(int dur2=0;dur2<tamam;){
			    
			    geriDon=getchar();
			    
				if(geriDon=='M'){
			        dur2=tamam;
					dur=1;//Ana menüye tuþ yardýmý ile geçmek için
			        system("CLS");
			    }
			    else{
				    printf("\nGecersiz tusa bastiniz. Lutfen 'M' tusuna basiniz: ");
				    dur2++;
				    tamam++;
				    geriDon=getchar();//else'deki printf'i 2 kez ekrana basýyor. Bu hatayý durdurmak için getchar() ekledim
			    }
		    }
		}
		else if(menu==3){
			if((RaporPointer=fopen("C:DersRaporu.txt","w")) == NULL){//Yeni .txt dosyasýnda rapor yazdýrmak için
		        puts("Dosya acilmadi!\n"); 
	         	exit(1);
	        }
	        else{
				fprintf(RaporPointer,"Öðrenci sayisi: %d\n\nVize Ortalamasý: %.2f\nFinal Ortalamasý: %.2f\n1.Ödevin Ortalamasý: %.2f\n2.Ödevin Ortalamasý: %.2f\nDonem Sonu Not Ortalamasý: %.2f\n",ogrenciSayisi,vizeOrt,finalOrt,odev1Ort,odev2Ort,donemSonuOrt);
            	fclose(RaporPointer);    
			}	
		}
	}
    return 0;	
}
