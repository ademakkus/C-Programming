#include <stdio.h>
#include <stdlib.h>
/*
Bir s�n�fta 100 soruluk bir deneme s�nav� yap�lm��t�r. Klavyeden girilen ��renci say�s�na g�re, her ��renci i�in klavyeden girilen do�ru ve yanl�� say�s�n� a�a��daki form�l �zerinde kullanarak en y�ksek net puan� alan ��renciyi bulup, bu ��rencinin do�ru say�s�n�, yanl�� say�s�n� ve net puan�n� ekranda g�r�nt�leyen bir C program� geli�tiriniz. Net puan hesaplan�rken, 4 yanl���n 1 do�ruyu g�t�rd��� g�z �n�ne al�nmal�d�r.

Program, ��renci say�s� 0 ya da daha az girildi�inde bir hata mesaj� ekranda g�r�nt�leyerek, pozitif girilene kadar ��renci say�s�n� kullan�c�dan tekrar istemelidir. Ayr�ca, ��rencinin do�ru ve yanl�� say�lar�n�n toplam� 100�� ge�memelidir. Aksi halde, bu toplam 100 ya da daha az olana kadar, o ��rencinin do�ru ve yanl�� say�lar� tekrar girilmelidir.

�RNEK �IKTI
*/
/*
Ogrenci sayisini girin: -10
! HATA: Ogrenci sayisi pozitif olmalidir !
Ogrenci sayisini girin: 0
! HATA: Ogrenci sayisi pozitif olmalidir !
Ogrenci sayisini girin: 3
------------------------------------------
1. ogrencinin dogru ve yanlis sayisini girin: 60 40
2. ogrencinin dogru ve yanlis sayisini girin: 70 35
! HATA: dogru ve yanlis sayisinin toplami 100 ya da daha az olmalidir !
2. ogrencinin dogru ve yanlis sayisini tekrar girin: 60 135
! HATA: dogru ve yanlis sayisinin toplami 100 ya da daha az olmalidir !
2. ogrencinin dogru ve yanlis sayisini tekrar girin: 100 1
! HATA: dogru ve yanlis sayisinin toplami 100 ya da daha az olmalidir !
2. ogrencinin dogru ve yanlis sayisini tekrar girin: 55 15
3. ogrencinin dogru ve yanlis sayisini girin: 20 81
! HATA: dogru ve yanlis sayisinin toplami 100 ya da daha az olmalidir !
3. ogrencinin dogru ve yanlis sayisini tekrar girin: 20 53
----------------------------------------------------------
En yuksek neti yapan ogrencinin:
Dogru sayisi  = 55
Yanlis sayisi = 15
Net puani     = 51.25

*/

#include <stdio.h>

int main()
{
	int dogru,yanlis;
	int sayi;
	int i;
	float maxnet;
	float net;
	int maxdogru;
	int maxyanlis;
	while(1)
	{

	printf("Ogrenci sayisini giriniz: ");
	scanf("%d",&sayi);
	if(sayi <= 0)
	{
		printf("\nogrenci sayisi pozitif olmal�d�r");
	}
	else
	{
	    break;
	}

	}
	i = 1;
	maxnet = -100;
	while( i<=sayi)
	{
	    printf("\n%d. ogrencinini dogru yanlis sayisini giriniz: ",i);
        scanf("%d %d",&dogru,&yanlis);

	if(dogru + yanlis > 100)
	{
	    printf("HATA! Dogru Yanlis saysinin toplami 100 ya da daha az olmalidir.\n");
	}
	else
	{
		i++;
	}
	net = dogru - (float)yanlis/4;
	if(net > maxnet)
	{
	    maxnet = net;
        maxdogru = dogru;
        maxyanlis = yanlis;
	}
	}
	printf("---------En yuksek neti yapan ogrencinin ----\n");
	printf("Dogru sayisi :%d\n",maxdogru);
	printf("Yanlis  sayisi :%d\n",maxyanlis);
	printf("Net  sayisi: %f\n",maxnet);

	return 0;
}

