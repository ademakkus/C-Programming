#include <stdio.h>
#include <stdlib.h>
int getNumOfCaharactersInString(char*);
int getNumOfCaharactersWithSpaceInString(char*a);
#define MAX 50
int main()
{
   char text[MAX];
   printf("Enter a text:");
   gets(text);
   int numOfCaharacters,numOfCaharactersWithSpaces;

   numOfCaharacters=getNumOfCaharactersInString(text);
   numOfCaharactersWithSpaces=getNumOfCaharactersWithSpaceInString(text);
   printf("Numbers of character without space: %d",numOfCaharacters);
    printf("\nNumbers of character with spaces: %d",numOfCaharactersWithSpaces);
    return 0;
}
int getNumOfCaharactersInString(char*a){
int i=0;
int count=0;
while(a[i]!=0){
    if(a[i]!=' ')
        count++;
    i++;
}
return count;
}
int getNumOfCaharactersWithSpaceInString(char*a){
    int i=0;
while(a[i]!=0){
     i++;
}
return i;
}
