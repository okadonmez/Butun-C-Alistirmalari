#include <stdio.h>
#include <string.h>

char harfGetir(int ilkRakam, int ikinciRakam);

char *SIFIR = "SIFIR";
char *BIR = "BIR";
char *IKI = "IKI";
char *UC = "UC";
char *DORT = "DORT";
char *BES = "BES";
char *ALTI = "ALTI";
char *YEDI = "YEDI";
char *SEKIZ = "SEKIZ";
char *DOKUZ = "DOKUZ";

int main(){
    
	int rakamlar[100];//Girilecek rakamlarýn dizideki yerleri 01 2 34 5 67 8   (2,5,8 olanlara çizgi gelecek)
	int *prakamlar;
	prakamlar=rakamlar;
	
	int ilkrakam=0;
	int ikincirakam=1;
	int ucuncurakam=2;//kýsa çizgi tutacak

	printf("Programin amaci girdiginiz rakamlari harfe donusturmesidir.\n-Girdiginiz 2 rakamdan sonra program kendiliginden kisa cizgi koyar.\n-[0,9] araliginda en az iki rakam girmek zorundasiniz.\n-Eger rakam yerine iki basamakli sayi girerseniz program hata verir. Kapatip tekrar acin.\n-Bir rakam girdikten sonra 'enter' a basip diger rakami girin.\n------------------------\n");
	printf("\n\nLutfen cevirmek istediginiz harf sayisini yaziniz. (Her harf icin iki rakam girmeniz gerekiyor)\n");
	
	int a;
	printf("Cevirmek istediginiz harf sayisi: ");
	scanf("%d\n",&a);
	
	for(int i=0;i<a;i++){
		
		scanf("%d",(prakamlar+ilkrakam));
		if(0<=*(prakamlar+ilkrakam)&&*(prakamlar+ilkrakam)<=9){
			ilkrakam+=3;
	    }
	    else{
	    	printf("Girdiginiz sayi bir rakam degil.");
	    	break;
		}	
			
		scanf("%d",(prakamlar+ikincirakam));
		if(0<=*(prakamlar+ikincirakam)&&*(prakamlar+ikincirakam)<=9){
			ikincirakam+=3;  
		}
		else{
	    	printf("Girdiginiz sayi bir rakam degil.");
	    	break;
		} 		
	}

    ilkrakam=0;
	ikincirakam=1;
	ucuncurakam=2;
    
    printf("%d",*(prakamlar+ilkrakam));//kýsa çizgi ile baþlamamasý için ilk 2 rakam döngüye girmeyecek
	ilkrakam+=3;
			
	printf("%d",*(prakamlar+ikincirakam));
	ikincirakam+=3;
    
    for(int i=1;i<a;i++){
	    
	    printf("-",(prakamlar+ucuncurakam));       
		ucuncurakam+=3;
		
		printf("%d",*(prakamlar+ilkrakam));
		ilkrakam+=3;
			
		printf("%d",*(prakamlar+ikincirakam));
		ikincirakam+=3;
	}
		
	ilkrakam=0;
	ikincirakam=1;
	ucuncurakam=2;
    
    printf("\n");
    
    harfGetir(*(prakamlar+ilkrakam),*(prakamlar+ikincirakam));//kýsa çizgi ile baþlamamasý için ilk harf döngüye girmeden çaðýrýlacak
    
	ilkrakam+=3;
	ikincirakam+=3;
	ucuncurakam+=3;
	
	for(int i=1;i<a;i++){
	    
		printf("-",(prakamlar+ucuncurakam));
		harfGetir(*(prakamlar+ilkrakam),*(prakamlar+ikincirakam));
	    
		ilkrakam+=3;
	    ikincirakam+=3;
	    ucuncurakam+=3;
    }
	return 0;	
}

char harfGetir(int ilkRakam, int ikinciRakam){
	
	if(ilkRakam==0){
		if(ikinciRakam<6){
			printf("%c",*(SIFIR+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi"); 
		}
	}
	else if(ilkRakam==1){
		if(ikinciRakam<4){
			printf("%c",*(BIR+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi");	
		}
	}
	else if(ilkRakam==2){
		if(ikinciRakam<4){
			printf("%c",*(IKI+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi");	
		}
	}
	else if(ilkRakam==3){
		if(ikinciRakam<3){
			printf("%c",*(UC+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi");	
		}
	}
	else if(ilkRakam==4){
		if(ikinciRakam<5){
			printf("%c",*(DORT+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi");	
		}
	}
	else if(ilkRakam==5){
		if(ikinciRakam<4){
			printf("%c",*(BES+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi");	
		}
	}
	else if(ilkRakam==6){
		if(ikinciRakam<5){
			printf("%c",*(ALTI+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi");	
		}
	}
	else if(ilkRakam==7){
		if(ikinciRakam<5){
			printf("%c",*(YEDI+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi");	
		}
	}
	else if(ilkRakam==8){
		if(ikinciRakam<6){
			printf("%c",*(SEKIZ+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi");	
		}
	}
	else if(ilkRakam==9){
		if(ikinciRakam<6){
			printf("%c",*(DOKUZ+(ikinciRakam-1)));
		}
		else{
		    printf("Rakam bulunamadi");	
		}
	}
	return 0;
}
