#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void tarlaHazirla(int[][15],int);
int main(){
int mayinTarlasi[15][15]={0};       //tarlanýn tamamýnda mayýn yok baþta
int mayinSayisi;
printf("Mayin Sayisini Giriniz:");
scanf("%d", &mayinSayisi);
printf("\n");
tarlaHazirla(mayinTarlasi,mayinSayisi);
return 0;
}
void tarlaHazirla(int a[][15],int ms)
{
int x,y,i,j;
srand(time(NULL));      //random besle
if(ms<0 || ms>225)
printf("Mayin sayisi 0 dan kucuk ve en fazla 225 olabilir. (Negatif de olamaz)");
else
{
for(i=1;i<=ms;i++)
{
x=rand()%15;                    //1-15 araliginda sayi uret
y=rand()%15;                      //1-15 araliginda sayi uret
if(a[x][y]==0)                      //eger mayin yoksa ekle
a[x][y]=1;
else        //degilse yani mayin var ms bir azalt
i--;
}
for(i=0;i<=14;i++)
{
for(j=0;j<=14;j++)
printf(" %d ",a[i][j]);
printf("\n");
}
}
}
