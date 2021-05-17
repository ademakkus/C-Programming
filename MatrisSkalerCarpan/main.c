#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void skalerIleCarp(int[][3],int);
void yaz(int[][3]);
int main(){
int m1[3][3];
int i,j,skaler;
printf("Matrisin elemanlarini giriniz:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d", &m1[i][j]);
}
printf("Skaleri giriniz:\n");
scanf("%d", &skaler);
skalerIleCarp(m1,skaler);
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
void skalerIleCarp(int a[][3], int k)
{
int i,j;
printf("\n");yaz(a);
printf("\n");
printf("SONUC:\n\n");
//Sonuç yazdýrýlýyor
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf(" %d ", k*(a[i][j]));
}
printf("\n");
}
}
