#include <stdio.h>
#include <stdlib.h>
/*
Bir sýnýfta 100 soruluk bir deneme sýnavý yapýlmýþtýr. Klavyeden girilen öðrenci sayýsýna göre, her öðrenci için klavyeden girilen doðru ve yanlýþ sayýsýný aþaðýdaki formül üzerinde kullanarak en yüksek net puaný alan öðrenciyi bulup, bu öðrencinin doðru sayýsýný, yanlýþ sayýsýný ve net puanýný ekranda görüntüleyen bir C programý geliþtiriniz. Net puan hesaplanýrken, 4 yanlýþýn 1 doðruyu götürdüðü göz önüne alýnmalýdýr.

Program, öðrenci sayýsý 0 ya da daha az girildiðinde bir hata mesajý ekranda görüntüleyerek, pozitif girilene kadar öðrenci sayýsýný kullanýcýdan tekrar istemelidir. Ayrýca, öðrencinin doðru ve yanlýþ sayýlarýnýn toplamý 100’ü geçmemelidir. Aksi halde, bu toplam 100 ya da daha az olana kadar, o öðrencinin doðru ve yanlýþ sayýlarý tekrar girilmelidir.

ÖRNEK ÇIKTI
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
		printf("\nogrenci sayisi pozitif olmalýdýr");
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

