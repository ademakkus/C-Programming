#include<stdio.h>
#include<math.h>
float simpson(float,float,int);
float f(float);
int main()
{
int aralikSayisi,altLimit,ustLimit;
printf("\n n degeri:");
scanf("%d", &aralikSayisi);
while(aralikSayisi<=0 || aralikSayisi%2!=0)
{
printf("n degeri cift ve sifirdan buyuk olmalidir!\n");
printf("n degeri:\n");
scanf("%d", &aralikSayisi);
}
printf("a degeri:\n");
scanf("%d", &altLimit);
printf("b degeri:\n");
scanf("%d", &ustLimit);
while(altLimit>=ustLimit)
    {
printf("Ust limit alt limitten buyuk olmalidir!\n");
printf("a degeri:\n");
scanf("%d", &altLimit);
printf("b degeri:\n");
scanf("%d", &ustLimit);
}
printf("%f",simpson(altLimit,ustLimit,aralikSayisi));
return 0;
}
float f(float x)
{
return 2*pow(x,2)+4*x+5;
}
float simpson(float a,float b, int n)
{
float delta_x;
float sonuc=0;
int i;
float aralikKontrol=a;
int j=0;
float noktalar[n+1];
delta_x=(b-a)/n;
while(aralikKontrol<=b)
{
noktalar[j]=aralikKontrol;
j++;
aralikKontrol=aralikKontrol+delta_x;
}
for(i=0;i<=n;i++)
{
if(i==0 || i==n)
sonuc=sonuc+f(noktalar[i]);
else if(i%2!=0)
sonuc=sonuc+4*f(noktalar[i]);
else if(i%2==0)
sonuc=sonuc+2*f(noktalar[i]);
}
return sonuc*(delta_x/3);
}
