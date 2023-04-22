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

	FILE *Fpointer; //dosya g�stericisi
	FILE *RaporPointer; //rapor g�stericisi
    
	int menu;
	int dur=1;//Men�ler aras� ge�i� yapmay� kolayla�t�rmak i�in
	
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
	        
		if(menu==1){//��rencileri Sisteme(Dizilere) Kay�t ediyor. Men�-2 i�in tekrar dosya okutmaya gerek yok.
			
			if((Fpointer=fopen("C:ogrenciListesi.txt","r")) == NULL){
		        puts("Dosya acilmadi!\n"); 
		        exit(1);
	        }//Not: Hocam ogrenciListesinin sizin bilgisayar�n�zda hangi dosyada oldu�unu bilmedi�imden C: nin tam yolunu girmedim. Ben .c dosyas�n�n bulundu�u klas�re at�p kulland�m.
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
				
				fclose(Fpointer);//Dosyay� kapat�r
			}
		}      
		else if(menu==2){
				
	    	int numaraGir;
			
			printf("Aranacak Ogrenci Numarasi Giriniz: ");
			scanf("%d",&numaraGir);
			getchar();//Scanf i�in bo� alan
	
		    int i=0;
		    int a;//Alttaki for d�ng�s� d���nda i de�erini tutuyor ve girilen ��renci numaras�n�n sistemde olup olmad���n� kontrol ediyor
				
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
			dur=0;//Ana men�ye tu� yard�m� ile ge�mek i�in
			
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
					dur=1;//Ana men�ye tu� yard�m� ile ge�mek i�in
			        system("CLS");
			    }
			    else{
				    printf("\nGecersiz tusa bastiniz. Lutfen 'M' tusuna basiniz: ");
				    dur2++;
				    tamam++;
				    geriDon=getchar();//else'deki printf'i 2 kez ekrana bas�yor. Bu hatay� durdurmak i�in getchar() ekledim
			    }
		    }
		}
		else if(menu==3){
			if((RaporPointer=fopen("C:DersRaporu.txt","w")) == NULL){//Yeni .txt dosyas�nda rapor yazd�rmak i�in
		        puts("Dosya acilmadi!\n"); 
	         	exit(1);
	        }
	        else{
				fprintf(RaporPointer,"��renci sayisi: %d\n\nVize Ortalamas�: %.2f\nFinal Ortalamas�: %.2f\n1.�devin Ortalamas�: %.2f\n2.�devin Ortalamas�: %.2f\nDonem Sonu Not Ortalamas�: %.2f\n",ogrenciSayisi,vizeOrt,finalOrt,odev1Ort,odev2Ort,donemSonuOrt);
            	fclose(RaporPointer);    
			}	
		}
	}
    return 0;	
}
