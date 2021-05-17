#include<stdio.h>
#include<math.h>
float bilesenBul(float,char,int);
int main()
{
float vektor;
int aci;
char eksen;
printf("Vektorun degerini giriniz:\n");
scanf("%f", &vektor);
printf("Ekseni giriniz (x,X,y,Y):\n");
scanf(" %c", &eksen);
while(eksen!='y' && eksen!='Y' && eksen!='x' && eksen!='X')   //x,X,y;Y dýþýnda deðer girilirse,buyuk kucuk harf kontrol
{
printf("Eksen olarak x,X,y ya da Y giriniz!\n");
scanf(" %c", &eksen);
}
printf("Aciyi giriniz:\n");
scanf("%d", &aci);
printf("Bilesenin degeri: %f", bilesenBul(vektor,eksen,aci));
return 0;
}
float bilesenBul(float v,char e,int a)
{
if(e=='y' || e=='Y')
return sin((M_PI*a)/180)*v;
else if(e=='x' || e=='X')
return cos((M_PI*a)/180)*v;
}
