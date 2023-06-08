#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>

int main(){
   
   
   int FerrariPuan=0;
   int DoganSLXPuan=0;
   
   
    while(1){
   
        srand(time(NULL));
        int sayi=rand()%10+1;
        int x=0;
        int f=0;
        printf("Gelen sayi= %d\n\n\n",sayi);
   
    
        if(1<=sayi&&sayi<=5){
           //doðanslx 3 birim saða
           DoganSLXPuan=3+DoganSLXPuan;
        }
        if(6<=sayi&&sayi<=7){
           //doðanslx -6 birim sola
           DoganSLXPuan=-6+DoganSLXPuan;
        }
        if(8<=sayi&&sayi<=10){
           //doðanslx 1 birim saða
           DoganSLXPuan=1+DoganSLXPuan;
        }
     
	 
	    if(1<=sayi&&sayi<=2){
           //ferrari hareket yok
           FerrariPuan=0+FerrariPuan;
        }
        if(3<=sayi&&sayi<=4){
           //ferrari 9 birim saða
           FerrariPuan=9+FerrariPuan;
        }
        if(sayi==5){
           //ferrari -12 birim sola
           FerrariPuan=-12+FerrariPuan;
        }
        if(6<=sayi&&sayi<=8){
           //ferrari 1 birim saða
           FerrariPuan=1+FerrariPuan;
        }
        if(9<=sayi&&sayi<=10){
           //ferrari -2 birim sola
           FerrariPuan=-2+FerrariPuan;
        }



        while(DoganSLXPuan>x){
   	       x++;
   	       printf(" ");
        }
           printf("X\n");
     
	    while(FerrariPuan>f){
   	       f++;
   	       printf(" ");
        }
           printf("F");
   
   
   
        if(FerrariPuan<0){
   	       FerrariPuan=0;
        }
     
	    if(DoganSLXPuan<0){
           DoganSLXPuan=0;
        }
   
        printf("\n\nDoganSLX= %d",DoganSLXPuan);
        printf("\nFerrari= %d",FerrariPuan);
   
        if(100<=FerrariPuan){
           printf("\nYarisi Ferrari Kazandi"); 
         break;
        }
     
	    else if(100<=DoganSLXPuan){
   	       printf("\nYarisi DoganSLX Kazandi");
         break;  
        }
   
      sleep(1);
      system("CLS");
    }
}
