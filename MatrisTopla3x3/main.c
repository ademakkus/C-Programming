#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void matrisTopla(int[][3],int[][3]);
void yaz(int[][3]);
int main(){
int m1[3][3],m2[3][3];
int i,j;
printf("1. Matrisin elemanlarini giriniz:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d", &m1[i][j]);
}
printf("*****************************************\n");
printf("2. Matrisin elemanlarini giriniz:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d", &m2[i][j]);
}
matrisTopla(m1,m2);
return 0;
}
void yaz(int a[][3])
{
int i,j;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf(" %d ", a[i][j]);
}
printf("\n");
}
}
void matrisTopla(int a[][3],int b[][3])
{
int i,j;
printf("\n");
yaz(a);printf("\n");
printf("+\n\n");
yaz(b);
printf("\n");
printf("SONUC:\n\n");
//Sonuç yazdýrýlýyor
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf(" %d ", a[i][j]+b[i][j]);
}
printf("\n");
}
}
