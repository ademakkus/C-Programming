#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
15X15�lik bir oyun pisti �zerinde canavara yakalanmama oyunu oynanmaktad�r. Oyunun, kolay (k/K) ve zor (z/Z) olmak �zere iki zorluk seviyesi bulunmaktad�r. Kolay seviyede 3 ila 7, zor seviyede ise 16 ila 32 aral���nda rastgele say�da canavar pist �zerine yine yerleri rastgele olacak �ekilde yerle�tirilir. Pistte, s�f�r (0) de�eri bo�, bir (1) ise canavar olan yerleri temsil eder.
Oyuncunun, hi�bir canavarla kar��la�madan pistin kuzeyinden g�neyine d�z bir �ekilde ge�ebilece�i ilk s�tunun numaras�n� bulup ekrana yazan C program�n� a�a��daki �rnek �al��maya uygun olacak �ekilde yaz�n�z.
NOT: Hi�bir canavarla kar��la�madan ge�ilebilecek s�tun bulunmamas� durumunda �Duz bir sekilde guneye gecileMEZ� mesaj� verilmelidir.
�RNEK �ALI�MA 1:
Oyunun zorluk seviye kodunu giriniz (K/k:Kolay, Z/z:Zor):  M
Yanlis seviye kodu girildi
�RNEK �ALI�MA 2:
Oyunun zorluk seviye kodunu giriniz (K/k:Kolay, Z/z:Zor):  Z
*/
void pistHazirla(int[][15],char);
int main(){
int pist[15][15]={0};       //pistin  tamaminda  yollar acik
int mayinSayisi;
char zorlukDerecesi;
printf("Oyunun zorluk seviye kodunu giriniz (K / k:Kolay, Z / z:Zor):");
scanf("%c", &zorlukDerecesi);
//zorlukDerecesi=getchar();
printf("\n");
pistHazirla(pist,zorlukDerecesi);

return 0;
}
//pistHazirla
void pistHazirla(int a[][15],char zorlukDerecesi)
{
int x,y,i,j;
int canavarSayisi;
srand(time(NULL));      //random besle
if(zorlukDerecesi!='k' && zorlukDerecesi!='K'&&zorlukDerecesi!='z'&&zorlukDerecesi!='Z' )
{
    printf("Yanlis seviye kodu girildi");
}
else
{
if(zorlukDerecesi=='k' ||  zorlukDerecesi=='K'){
   canavarSayisi = ( rand() % 3 ) + 4;
}
else if(zorlukDerecesi=='z' ||  zorlukDerecesi=='Z')
{
       canavarSayisi = ( rand() % 16 ) + 16;

}



for(i=1;i<=canavarSayisi;i++)
{
x=rand()%15;                    //1-15 araliginda sayi uret
y=rand()%15;                      //1-15 araliginda sayi uret
if(a[x][y]==0)                      //eger mayin yoksa ekle
a[x][y]=1;
else        //degilse yani mayin var ms bir azalt
i--;
}

//pisti yazdir
for(i=0;i<=14;i++)
{
for(j=0;j<=14;j++)
printf(" %d ",a[i][j]);
printf("\n");
}
//
int k=0;
i=0;
j=0;
        while(a[0][j]!=0){
 j++;
            if(a[0][j]==0){
                while(a[i][j]==0&&i<15){
                    i++;
                }

            }


        }

/*
for (int i = 0; i<10; i++)
        array[0][i] = 0;
*/

printf("\n j: %d",j);
printf("\nPiste %d canavar rastgele yerlere yerlestirildi.",canavarSayisi);
printf("\n6 nolu sutundan duz bir sekilde guneye gecilebilir ");
}
}
