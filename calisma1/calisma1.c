#include<stdio.h>
#include<math.h>

int main(){	
	
    float A1,B1,C1,A2,B2,C2;
    float m,d,s,x0,y0;//Eðim,aralarýndaki uzaklýk,alfa
	printf("Ax + By + C = 0 tanimli fonksiyonunun sirasiyla degerlerini giriniz.\n");
    
    printf("1.fonksiyonun x katsayisi: ");
    scanf("%f",&A1);
    printf("1.fonksiyonun y katsayisi: ");
    scanf("%f",&B1);
    printf("1.fonksiyonun c sabiti: ");
    scanf("%f",&C1);
    printf("1. fonksiyon %.2fx + %.2fy + %.2f = 0\n\n",A1,B1,C1);
   
    printf("2.fonksiyonun x katsayisi: ");
    scanf("%f",&A2);
    printf("2.fonksiyonun y katsayisi: ");
    scanf("%f",&B2);
    printf("2.fonksiyonun c sabiti: ");
    scanf("%f",&C2);
    printf("2. fonksiyon %.2fx + %.2fy + %.2f = 0\n\n",A2,B2,C2);
    
	
	if(A1/A2==B1/B2&&A1/A2!=C1/C2){
	   printf("\nIki dogru birbirine paraleldir.");
       if(A1>A2){
	      d=fabs(C1-C2)/sqrt(A2*A2+B2*B2);
          printf("\nIki dogru arasindaki uzaklik= %.2f",d);
       }
       if(A2>A1){
	      d=fabs(C1-C2)/sqrt(A1*A1+B1*B1);
          printf("\nIki dogru arasindaki uzaklik= %.2f",d);
       }
       if(A1==A2){
	      d=fabs(C1-C2)/sqrt(A1*A1+B1*B1);
          printf("\nIki dogru arasindaki uzaklik= %.2f",d);
	   } 
	} 
	if(A1/A2==B1/B2&&A1/A2==C1/C2){
	   printf("\nIki dogru cakisiktir. Yani ust ustedir.");
       printf("\nIki dogru arasindaki aci= 0 derecedir.");
	}  
	if((A1/A2)!=(B1/B2)){
       m=(A1*B2-A2*B1)/(A1*A2+B1*B2);
	   s=atan(m)*180/3.1416;
	   x0=(B1*C2-B2*C1)/(A1*B2-A2*B1);
       y0=(C1*A2-C2*A1)/(A1*B2-A2*B1);
	   printf("\nIki dogru kesisiyor.");
	   printf("\nKesistikleri noktalar x0= %.2f   ve   y0= %.2f",x0,y0);
	   printf("\nIki dogru arasindaki aci= %.2f derecedir",s);
	}
	if((A1*A2+B1*B2)==0){
       printf("\nIki dogru birbirine diktir.");
       printf("\nIki dogru arasindaki aci= 90 derecedir.");
	}
}


  










   
   

