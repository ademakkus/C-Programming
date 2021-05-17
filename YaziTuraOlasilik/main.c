#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void yaziTuraHesapla(int);
int main()
{
int ds;
printf("Deneme sayisini  giriniz:\n");
scanf("%d", &ds);
yaziTuraHesapla(ds);
return 0;
}
void yaziTuraHesapla(int deneySayisi)
{
int i,yaziSayisi=0;
int  turaSayisi=0;
srand(time(NULL));
for(i=1;i<=deneySayisi;i++)
{

if(rand()%2==1)
    turaSayisi++;
else if(rand()%2==0)
    yaziSayisi++;
}
printf("Toplam TURA sayi = %d",turaSayisi);
printf("\nToplam YAZI  sayi = %d",yaziSayisi);
printf("\nOlasilik= %f",(float)turaSayisi/deneySayisi);
//printf("\n%d",rand()%2);
//printf("\n%d",rand()%2);

}
