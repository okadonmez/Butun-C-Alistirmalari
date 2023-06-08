#include<stdio.h>

int main(){
	
	
	char c,B,F,V;
	float yukseklik;//Topu bırakacağımız yükseklik
    float mesafe=0;//Alacağı mesafeleri toplamak için
    float ilkyukseklik;//Yüksekliğimiz if bloğu içinde sürekli değişecek. İlk yüksekliği bu değerde sabitledik. 
	int ziplama=0;
	
	printf("Lutfen top turunu seciniz.  (Basketbol icin=>B, Futbol icin=>F, Voleybol icin=>V)\n");
	scanf("%c",&c);
	
	if(('B'==c)||('F'==c)||('V'==c)){
	   
	   printf("Lutfen metre cinsinden yukseklik giriniz\n");
	   scanf("%f",&yukseklik);
	   yukseklik=yukseklik*100;//cm'ye çevirdik
       ilkyukseklik=yukseklik;//İlk yüksekliği kayıp etmemek için kayıt ettik
	   printf("girilen yuksekik= %.f cm\n",yukseklik);
	
	   if('B'==c){
	       while(1){
	          ziplama++;
		      //ilk yükseklik ve son yükseklikten 1 er tane olmalı 
		      yukseklik=yukseklik*0.7;//Top bir kez sekti
		      mesafe=mesafe+yukseklik;//ve toplam mesafe kayıt edilmeye başlandı
		      
	      
		      if(yukseklik<=10){//Eğer yer ile arasında 10cm veya daha az varsa denklemden çıkar
		         break;
		      }
		   }
		   printf("\nZiplama sayisi= %d",ziplama);
		   printf("\nKat Edilen Mesafe= %.2f cm <=> %.2f m",(2*mesafe+ilkyukseklik-yukseklik),(2*mesafe+ilkyukseklik-yukseklik)/100);
	   /*(2*mesafe+ilkyukseklik-yukseklik) Denklemindeki "yukseklik" topun en son ki sekmesinden 
	   sonraki yüksekliktir. Toplam mesafeyi 2 ile çarptığımız için iki kez almış olduk. 
	   Ve birini geri çıkardık. İlk yüksekliğimiz toplam alınan mesafede yoktu ve onuda burada
	   ekledik.
	   */
	   }
	   if('F'==c){
		   while(1){
	          ziplama++;
		      //ilk yükseklik ve son yükseklikten 1 er tane olmalı 
		      yukseklik=yukseklik*0.75;
		      mesafe=mesafe+yukseklik;
		      
	      
		      if(yukseklik<=10){
		         break;
		      }
		   }
		   printf("\nZiplama sayisi= %d",ziplama);
		   printf("\nKat Edilen Mesafe= %.2f cm <=> %.2f m",(2*mesafe+ilkyukseklik-yukseklik),(2*mesafe+ilkyukseklik-yukseklik)/100);
	   }
	   if('V'==c){
		   while(1){
	          ziplama++;
		      //ilk yükseklik ve son yükseklikten 1 er tane olmalı 
		      yukseklik=yukseklik*0.9;
		      mesafe=mesafe+yukseklik;
		      
	      
		      if(yukseklik<=10){
		         break;
		      }
		   }
		   printf("\nZiplama sayisi= %d",ziplama);
		   printf("\nKat Edilen Mesafe= %.2f cm <=> %.2f m",(2*mesafe+ilkyukseklik-yukseklik),(2*mesafe+ilkyukseklik-yukseklik)/100);
  	   }
    }
	
	if(('B'!=c)&&('F'!=c)&&('V'!=c)){
       printf("Gecersiz karakter girdiniz. Lutfen tekrar giriniz.");
	}
}
