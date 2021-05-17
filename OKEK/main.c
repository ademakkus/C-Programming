#include <stdio.h>
#include <stdlib.h>
int okek(int,int);
int main()
{
int sayi1,sayi2;
printf("Sayilari giriniz: ");
scanf("%d%d", &sayi1,&sayi2);
printf("Sayilarin OKEK i= %d", okek(sayi1,sayi2));
return 0;
}
int okek(int x,int y)
{
while(x<1 || y<1)
{
printf("Degerler 1 veya daha buyuk olmalidir!!\n");
scanf("%d%d", &x,&y);
}
int sonuc=1;
int i,buyuk;
if(x>y)
buyuk=x;
else
buyuk=y; //eþit olsalar bile herhangi birisine eþit olsa yeterlidir.
for(i=2;i<=buyuk;i++)
{
if(x%i==0 || y%i==0)
{
sonuc=sonuc*i;
if(x%i==0 && y%i==0)
{
x=x/i;
y=y/i;
}
else if(x%i==0 && y%i!=0)
x=x/i;
else if(x%i!=0 && y%i==0)
y=y/i;
i--;
}
}
return sonuc;
}
