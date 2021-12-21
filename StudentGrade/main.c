#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter the  grade of the student:");
    scanf("%d",&grade);
    if(grade<=0||grade>100)
        printf("Invalid grade");
    else{
        if(grade<=50)
            printf("Fails");
        else  if(grade<=60)
            printf("Passes with D");
        else  if(grade<=70)
            printf("Passes with C");
        else  if(grade<=80)
            printf("Passes with B");
        else  if(grade<=90)
            printf("Passes with B");
        else

            printf("Passes with AA");
    }
    return 0;
}
