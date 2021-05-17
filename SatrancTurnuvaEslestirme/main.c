#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void eslestir();
int main()
{
eslestir();
return 0;
}
void eslestir()
{
char eslesmemisOyuncular[10]={'A','B','C','D','E','F','G','H','I','J'}; //oyuncular
int eslesmisOyuncular[10];
srand(time(NULL));
int i;
int rastgeleSecilen;
for(i=0;i<=9;i++)
    eslesmisOyuncular[i]=-1;        //dizi elemanlarýný NULL yap
for(i=0;i<=9;i++)
{
rastgeleSecilen=rand()%10;          //1 -10 arasýnda rastgele sayi uret
//while döngüsü ile rastgele seçilen sayýnýn tekrar seçilmemesi için
while(rastgeleSecilen==eslesmisOyuncular[0] ||
rastgeleSecilen==eslesmisOyuncular[1] ||
rastgeleSecilen==eslesmisOyuncular[2] ||
rastgeleSecilen==eslesmisOyuncular[3] ||
rastgeleSecilen==eslesmisOyuncular[4] ||
rastgeleSecilen==eslesmisOyuncular[5] ||
rastgeleSecilen==eslesmisOyuncular[6] ||
rastgeleSecilen==eslesmisOyuncular[7] ||
rastgeleSecilen==eslesmisOyuncular[8] ||
rastgeleSecilen==eslesmisOyuncular[9] )
rastgeleSecilen=rand()%10;
eslesmisOyuncular[i]=rastgeleSecilen;
}
for(i=0;i<=8;i+=2)
    printf("%c - %c\n",eslesmemisOyuncular[eslesmisOyuncular[i]],eslesmemisOyuncular[eslesmisOyuncular[i+1]]);
}
