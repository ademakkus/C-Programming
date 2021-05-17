#include <stdio.h>
#include <stdlib.h>
int obeb(int,int);
int main()
{
int sayi1,sayi2;
printf("Sayilari giriniz:");
scanf("%d %d",&sayi1,&sayi2);
printf("Sayilarin OBEB i  =%d",obeb(sayi1,sayi2));

    return 0;
}

int obeb(int x,int y){
while(x<1||y<1){
        printf("Degerler 1 veya daha buyuk olmalidir.");
    scanf("%d %d ",&x,&y);
}
int sonuc=1;
int i,kucuk;
if(x<y)
    kucuk=x;
else
    kucuk=y;
for(i=2;i<=kucuk;i++){
    if(x%i==0 &&y%i==0)
   {

       sonuc*=i;
       x=x/i;
       y=y/i;
   }
    else if(x%i==0 && y%i!=0)
        x=x/i;
        else if(x%i!=0 && y%i==0)
            y=y/i;
        if(x%i==0||y%i==0)
            i--;

}
return sonuc;
}
