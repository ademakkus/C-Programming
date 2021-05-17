#include <stdio.h>
#include <stdlib.h>
void asal_mi(int);
int main()
{
   int sayi;
   printf("Sayiyi giriniz:");
   //puts("Sayýyý giriniz:");
   scanf("%d",&sayi);
   asal_mi(sayi);
    return 0;
}

void asal_mi(int x){
int i;
int asalMi=1;
if(x<2) printf("Asal sayi 2 den baþlar");
else
{

    for(i=2;i<x;i++){
        if(x%i==0)
          {
              printf("Sayi asal degildir.");
                asalMi=0;
                break;
          }

    }
    if(asalMi==1)
        printf ("Sayi Asaldir");
}

}
