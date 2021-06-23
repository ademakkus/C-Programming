#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int sonuc=0;
    printf("bir tamsayi girin:");
    scanf("%d",&sayi);
    while (sayi > 0)
            {
                sonuc += (sayi % 10);
                sayi = sayi / 10;
            }
printf("girdiginiz sayi basamklarinin toplami =%d",sonuc);
    printf("\n------------------------------");

}
