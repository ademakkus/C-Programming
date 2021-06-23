#include <stdio.h>
#include <stdlib.h>
int asalmi(int,int);
int gelensayi;
int main()
{
    int sonuc,sayi,sinirdegeri;
    int sayac=0;
      printf("lutfen bir sayi girin:");
    scanf("%d",&sayi);
    printf("lutfen bir sayi siniri girin:");
    scanf("%d",&sinirdegeri);

if(sayi==1){
    sayi=sayi+1;
}
for(int i=2;i<=sinirdegeri;i++){
    if((asalmi(i,sayi)==1) && asalmi(i+2,sayi)&& asalmi(i+6,sayi)){
        printf("%5d %5d %5d\n",i,i+2,i+6);
sayi++;
    }

}
}
int asalmi(int sayi,int sinir){
int sayac;
   int asal = 0;

   for(sayac = 2; sayac < sinir; sayac++) {
      if((sayi % sayac)== 0) {
         asal = 1;
      }

   }
   if(asal==0)
    return 1;
 else
    return 0;
}
