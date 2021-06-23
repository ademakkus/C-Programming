#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("adinizi soyadinizi bosluk birakmadan girinz:");
    scanf("%s",&isim);
    int uzunluk=sizeof(isim);
    char isim[MAX];
    for(int i=uznluk;i>=uzunluk;i--){
        printf("%s",isim[i]);
    }
    return 0;
}
