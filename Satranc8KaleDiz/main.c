#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Bir satranç tahtasýna 8 adet kaleyi birbirlerini yiyemeyecek þekilde rastgele dizen C programýný
yazýnýz. (Her satýrda 1 kale olacaktýr)
*/
void yaz(int a[][8])
{
int i,j;
for(i=0;i<=7;i++)
{
printf("\n");
for(j=0;j<=7;j++)
{
if(a[i][j]==2)
printf(" - ");
else if(a[i][j]==1)
printf(" K ");
}
}
printf("\n\n\n");
}
void kaleEkle(int a[][8],int x,int y)
{
int i;
a[x][y]=1;
for(i=0;i<=7;i++) // yatay
{if(i==y)
continue;
a[x][i]=2;
}
for(i=0;i<=7;i++) // dikey
{
if(i==x)
continue;
a[i][y]=2;
}
}
int tehdit(int a[][8],int x,int y)
{
if(a[x][y]==2)
return 1; //Kale tehdidi var
else if(a[x][y]==0) //Kale tehdidi yok
return 0;
}
int main ()
{
int tahta[8][8] = {0};
int i,j,rastgeleSutun;
srand(time(NULL));
for(i=0;i<=7;i++)
{
do
{
rastgeleSutun=rand()%8;
}while(tehdit(tahta,i,rastgeleSutun)==1);
kaleEkle(tahta,i,rastgeleSutun);
}
yaz(tahta);
return 0;
}
