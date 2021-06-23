#include <stdio.h>
#include <stdlib.h>
int main()
{
 char isim[1000], tersisim[1000];
   int baslangic, son, sayac = 0;

   printf("adinizi soyadinizi bosluk birakmadan girinz:");
   gets(isim);
   while (isim[sayac] != '\0')
      sayac++;
   son = sayac - 1;
   for (baslangic = 0; baslangic < sayac; baslangic++) {
      tersisim[baslangic] = isim[son];
      son--;
   }
   tersisim[baslangic] = '\0';

   printf("%s\n", tersisim);
printf("------------------");
   return 0;
}
