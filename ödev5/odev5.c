#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>

void baslangic();
void oda1();
void oda2();
void oda3();
void oda4();
void oda5();
void oda6();
bool anahtar=false;


int main(){
	printf("Oyun kurallari.\n------------------------\n1-Sadece kucuk harfler kullanilacak.\n2-Turkce karakterler kullanilmayacak.\n3-Eger olurseniz talimatlari uygulayarak oyunu kapatmadan tekrar oynayabilirsiniz.\n4-Oyuna girmek icin devam yazin.\n------------------------");
	
	int tekrargir=1;
    
	while(tekrargir){
		
		char komut[20];
	
		printf("\nKomut giriniz: ");
		gets(komut);
		system("CLS");
	
	    if(strcmp(komut,"devam")==0){
			tekrargir=0;
			baslangic();
		}
		else{
			printf("Girilen komut gecersiz...");
		}
    }
	return 0;
}

void baslangic(){
	printf("-Dogu yonunde buyuk bir satonun onundesin. Iceri girmen gerekiyor yoksa pesindekiler seni yakalayacaklar.-");	
    
	int tekrargir=1;
    
	while(tekrargir){//Girilen komut geçersizse tekrar girer
    
		char komut[20];
	
		printf("\nKomut giriniz: ");
		gets(komut);
		system("CLS");
	
		if(strcmp(komut,"dogu")==0){
			tekrargir=0;
			oda1();
		}
		else{
			printf("Girilen komut gecersiz...");
		}
    }

}


void oda1(){//Yemek odasý
	printf("-Sonunda iceridesin. Yemek masasi uzerinden bir seyler yiyebilirsin.-");
	
	int tekrargir=1;
    
	while(tekrargir){
		
		char komut[20];
	
		printf("\nKomut giriniz: ");
		gets(komut);
		system("CLS");
	
		if(strcmp(komut,"bati")==0){
			tekrargir=0;
			baslangic();
		}
		else if(strcmp(komut,"kuzey")==0){
			tekrargir=0;
			oda2();
		}
		else if(strcmp(komut,"guney")==0){
			tekrargir=0;
			oda3();
		}
		else if(strcmp(komut,"dogu")==0){
			tekrargir=0;
			oda6();
		}
		else if(strcmp(komut,"yemek ye")==0){//Döngü sayesinde yemek yedikten sonra tekrar komut girilebilir ve hareket edilebilir
			printf("Cok acikmisim. Biraz yemek yiyecegim. Hagmm, fuhhhpp... Doydum. Simdi prensesi kurtarmaya devam edebilirim.(Devam etmek icin dogu, kuzey, guney, bati dan birine git)");
		}
		else{
			printf("Girilen komut gecersiz...");
		}
    }
}


void oda2(){//Ejderha odasý
	printf("-Khaleesi'nin Dracarys sesini duymanla beraber ejderha atesi altinda yanarak oldun...-(Tekrar oynamak icin devam yazin)");
	
	int tekrargir=1;
    
	while(tekrargir){
	
		char komut[20];
	
		printf("\nKomut giriniz: ");
		gets(komut);
		system("CLS");
	
		if(strcmp(komut,"devam")==0){
			tekrargir=0;
			baslangic();
		}
		else{
			printf("Girilen komut gecersiz...");
		}
	}
}


void oda3(){//Yatak odasý
	printf("-Kucuk bir odadasin. Ortada bir yatak var. Yorgunsan dinlenebilirsin.-");
	
	int tekrargir=1;
    
	while(tekrargir){
		
		char komut[20];
	
		printf("\nKomut giriniz: ");
		gets(komut);
		system("CLS");
	
		if(strcmp(komut,"guney")==0){
			tekrargir=0;
			oda4();
		}
		else if(strcmp(komut,"dogu")==0){
			tekrargir=0;
			oda5();
		}
		else if(strcmp(komut,"kuzey")==0){
			tekrargir=0;
			oda1();
		}
		else if(strcmp(komut,"dinlen")==0){//Döngü sayesinde dinlendikten sonra tekrar komut girilebilir ve hareket edilebilir
			printf("Cok yoruldum. Biraz su yatakta uyuyayim. Zzz Zzzz...(Devam etmek icin dogu, kuzey, guney den birine git)");
		}
		else{
			printf("Girilen komut gecersiz...");
		}
	}
}


void oda4(){//Yýlan odasý
	printf("-Tissss.... Bir piton yilani tarafindan sikilarak olduruldun... Bogulurken keske C yerine Python mu ogrenseydim diye kafandan gecirdin...-(Tekrar oynamak icin devam yazin)");
	
	int tekrargir=1;
    
	while(tekrargir){
		
		char komut[20];
	
		printf("\nKomut giriniz: ");
		gets(komut);
		system("CLS");
	
		if(strcmp(komut,"devam")==0){
			tekrargir=0;
			baslangic();
		}
		else{
			printf("Girilen komut gecersiz...");
		}
	}
}


void oda5(){//Anahtar odasý
	printf("-Cok karanlik bir odadasin. Sadece parlayan altin bir anahtar var.-(Anahtari almak icin anahtari al yazin.)");
	
	int tekrargir=1;
    
	while(tekrargir){
	
		char komut[20];
	
		printf("\nKomut giriniz: ");
		gets(komut);
		system("CLS");
	
		if(strcmp(komut,"anahtari al")==0){
			anahtar=true;
		
			printf("Anahtari sonunda bulduk... Odadan hizlica cikiyorum. Cok karanlik cok korktum.(Odadan cikmak icin batiya dogru gidin.)");
			printf("\nKomut giriniz: ");
	    	gets(komut);
	    	system("CLS");
	    
			if(strcmp(komut,"bati")==0){//Anahtarý alýp çýkmak için
		    	tekrargir=0;
				oda3();
	    	}
	    	else{
		    	printf("Girilen komut gecersiz...");
	    	}
    	}
		else if(strcmp(komut,"bati")==0){//Anahtarý almadan çýkmak için
			tekrargir=0;
			oda3();
		}
		else{
			printf("Girilen komut gecersiz...");
		}
    }
}


void oda6(){//Tahmin odasý
	printf("-Bilgisayar tarafindan yonetilen odadasin. 0 ile 9 arasinda bir sayi tutmus. Uc denemede bulmalisin.-");
	
	srand(time(NULL));
    
	int sayi = rand()%9;
    int tahmin;
    int tahminSayisi=1;
	
	for(;tahminSayisi<4;tahminSayisi++){
		
		printf("\n\nTahmin giriniz:");
	   	scanf("%d",&tahmin);
	    printf("%d. Tahminin: %d\n",tahminSayisi,tahmin);
			
		if(-1<tahmin&&tahmin<10){//Verilen aralýkta olup olmadýgýný kontrol ediyor
			if(tahmin==sayi){//Tahminler doðruysa buraya girecek
		    	if(anahtar==false){
	            	printf("\nDogru sayiyi buldun ancak kilitli kapiyi acacak anahtar yaninda degil... Odaya zehirli bir gaz dolmaya basladi ve oldun...");
			   		tahminSayisi=4;//Döngüyü kesip oyunu bitiriyor
				}
	        	else if(anahtar==true){
		       		printf("\nTebrikler... Dogru sayiyi buldun ve kilitli kapiyi acarak prensesi kurtardin...");
	           		tahminSayisi=4;
   			    }
	   		}
			else if(tahminSayisi==3){//3. Tahminde doðru deðilse buraya girecek ve oyun bitecek
	   			printf("\nUc denemede de bulamadin... Odaya zehirli bir gaz dolmaya basladi ve oldun...");
		    	tahminSayisi=4;
			}
	   	}
	   	else{
	   		printf("\nGirilen tahmin gecersiz. Lutfen verilen aralikta bir sayi giriniz...");
		}
	}
    
	printf("\n\n...<Oyun Bitti>...");
}
