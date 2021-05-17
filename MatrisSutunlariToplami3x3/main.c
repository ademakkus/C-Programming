#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sutunTopla(int[][3]);
void yaz(int[][3]);
int main(){
int m1[3][3];
int i,j;
printf("Matrisin elemanlarini giriniz:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d", &m1[i][j]);
}
sutunTopla(m1);
return 0;
}
void yaz(int a[][3])
{int i,j;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf(" %d ", a[i][j]);
}
printf("\n");
}
}
void sutunTopla(int a[][3])
{
int i,j;
int toplam=0;
printf("\n");
yaz(a);
printf("\n");
printf("SONUC:\n\n");
//Sonuç yazdýrýlýyor
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
toplam+=a[j][i];
}
printf("%d. sutun toplami %d \n",i+1 ,toplam);
toplam=0;
}
}
