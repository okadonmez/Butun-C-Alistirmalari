#include<stdio.h>

int main(){
	
	
	char c,B,F,V;
	float yukseklik;//Topu b�rakaca��m�z y�kseklik
    float mesafe=0;//Alaca�� mesafeleri toplamak i�in
    float ilkyukseklik;//Y�ksekli�imiz if blo�u i�inde s�rekli de�i�ecek. �lk y�ksekli�i bu de�erde sabitledik. 
	int ziplama=0;
	
	printf("Lutfen top turunu seciniz.  (Basketbol icin=>B, Futbol icin=>F, Voleybol icin=>V)\n");
	scanf("%c",&c);
	
	if(('B'==c)||('F'==c)||('V'==c)){
	   
	   printf("Lutfen metre cinsinden yukseklik giriniz\n");
	   scanf("%f",&yukseklik);
	   yukseklik=yukseklik*100;//cm'ye �evirdik
       ilkyukseklik=yukseklik;//�lk y�ksekli�i kay�p etmemek i�in kay�t ettik
	   printf("girilen yuksekik= %.f cm\n",yukseklik);
	
	   if('B'==c){
	       while(1){
	          ziplama++;
		      //ilk y�kseklik ve son y�kseklikten 1 er tane olmal� 
		      yukseklik=yukseklik*0.7;//Top bir kez sekti
		      mesafe=mesafe+yukseklik;//ve toplam mesafe kay�t edilmeye ba�land�
		      
	      
		      if(yukseklik<=10){//E�er yer ile aras�nda 10cm veya daha az varsa denklemden ��kar
		         break;
		      }
		   }
		   printf("\nZiplama sayisi= %d",ziplama);
		   printf("\nKat Edilen Mesafe= %.2f cm <=> %.2f m",(2*mesafe+ilkyukseklik-yukseklik),(2*mesafe+ilkyukseklik-yukseklik)/100);
	   /*(2*mesafe+ilkyukseklik-yukseklik) Denklemindeki "yukseklik" topun en son ki sekmesinden 
	   sonraki y�ksekliktir. Toplam mesafeyi 2 ile �arpt���m�z i�in iki kez alm�� olduk. 
	   Ve birini geri ��kard�k. �lk y�ksekli�imiz toplam al�nan mesafede yoktu ve onuda burada
	   ekledik.
	   */
	   }
	   if('F'==c){
		   while(1){
	          ziplama++;
		      //ilk y�kseklik ve son y�kseklikten 1 er tane olmal� 
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
		      //ilk y�kseklik ve son y�kseklikten 1 er tane olmal� 
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
