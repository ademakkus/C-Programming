#include <stdio.h>
#include <stdlib.h>
/*
Bir k�rtasiyede sat�lan �ocuk kitab�, roman ve s�zl�klerin fiyatlar� a�a��daki gibi belirlenmi�tir:
�ocuk kitab�: Tanesi 5 TL
Roman: �lk 200 sayfa i�in sayfa ba��na 0.1 TL, 200�den sonraki her sayfa i�in ek olarak 0.05 TL
S�zl�k: Cep s�zl�kleri 7.5 TL, b�y�k s�zl�kler ise 15 TL
�lk harfi b�y�k ya da k���k harf olarak girilen kitab�n (c, C, r, R, s veya S) fiyat�n�, her kitap t�r� i�in gerekli bilgileri klavyeden okuyarak hesaplayan ve ekrana yazan C program�n� geli�tiriniz. Kitap t�r� ya da s�zl�k t�r� hatal� girildi�inde uygun bir hata mesaj� ekranda g�r�nt�lenmeli ve program sonlanmal�d�r.
NOT: �rne�in, cep s�zl��� i�in c ya da C, b�y�k s�zl�k i�in b ya da B girilmelidir.
�RNEK �IKTI�1:	�RNEK �IKTI�2:	�RNEK �IKTI�3:
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
