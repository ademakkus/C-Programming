#include <stdio.h>
#include <stdlib.h>
/*
Bir kýrtasiyede satýlan çocuk kitabý, roman ve sözlüklerin fiyatlarý aþaðýdaki gibi belirlenmiþtir:
Çocuk kitabý: Tanesi 5 TL
Roman: Ýlk 200 sayfa için sayfa baþýna 0.1 TL, 200’den sonraki her sayfa için ek olarak 0.05 TL
Sözlük: Cep sözlükleri 7.5 TL, büyük sözlükler ise 15 TL
Ýlk harfi büyük ya da küçük harf olarak girilen kitabýn (c, C, r, R, s veya S) fiyatýný, her kitap türü için gerekli bilgileri klavyeden okuyarak hesaplayan ve ekrana yazan C programýný geliþtiriniz. Kitap türü ya da sözlük türü hatalý girildiðinde uygun bir hata mesajý ekranda görüntülenmeli ve program sonlanmalýdýr.
NOT: Örneðin, cep sözlüðü için c ya da C, büyük sözlük için b ya da B girilmelidir.
ÖRNEK ÇIKTI–1:	ÖRNEK ÇIKTI–2:	ÖRNEK ÇIKTI–3:
Kitap turunu giriniz (c,C,r,R,s,S): R
Sayfa sayisini girin: 250
Toplam Fiyat = 22.50 TL	Kitap turunu giriniz (c,C,r,R,s,S): s
Sozluk turunu girin (c,C,b,B): x
! HATA: Boyle bir sozluk turu yok !	Kitap turunu giriniz (c,C,r,R,s,S): O
! HATA: Boyle bir kitap turu yok !


*/


int main()
{
	char c;
	int adet;
	int sayfa;
	float fiyat;
	char tur;
	printf("Kitap turunu giriniz(c,C,s,S,r,R) : ") ;
	scanf("%c",&c);

	switch(c)

	{
		case 'c' :
			/*
			printf("adet giriniz: ");
			scanf("%d",&adet);
			fiyat =5 * adet;
		break;
		*/
		case 'C' :
			printf("adet giriniz: ");
			scanf("%d",&adet);
			fiyat =5 * adet;
		break;

			case 'r' :
	/*
				printf("Sayfa sayisini giriniz :");
				scanf("%d",&sayfa);
				if(sayfa <= 200 && sayfa >= 0)
				{
					fiyat = sayfa *0.1;
				}
				else if(sayfa >200)
				{
					fiyat = (sayfa - 200)*0.05 + 200*0.1;
				}
				else
				{printf("sayfa sayisi yanlis girildi \n");
				}

		break;

	*/
			case 'R' :
				printf("Sayfa sayisini giriniz :");
				scanf("%d",&sayfa);
				if(sayfa <= 200 && sayfa >= 0)
				{
					fiyat = sayfa *0.1;
				}
				else if(sayfa >200)
				{
					fiyat = (sayfa - 200)*0.05 + 200*0.1;
				}
				else
				{printf("sayfa sayisi yanlis girildi \n");
				}
		break;
			case 's' :
				/*
				printf("Sozluk turunu giriniz (c,C,b,B):");
				scanf("%c",&c);
				scanf("%c",&tur);
				if(tur == 'c' || tur =='C')
				{fiyat = 7.5;
				}
				else if(tur=='b' || tur == 'B')
				{fiyat = 15;
				}
				else
				{printf("Boyle sozluk turu yok");
				}
		break;
				*/
			case 'S' :

				printf("Sozluk turunu giriniz(c,C,b,B) :");
				scanf("%c",&tur);
				scanf("%c",&tur);
				if(tur == 'c' || tur =='C')
				{fiyat = 7.5;
				}
				else if(tur=='b' || tur == 'B')
				{fiyat = 15;
				}
				else
				{printf("Boyle sozluk turu yok");
				}
		break;
		}
	 printf("Toplam Fiyat : %f",fiyat);
	return 0;
}
