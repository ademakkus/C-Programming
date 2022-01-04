#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    char choice='Y';
    int sum=0;
    printf("Enter an integer:");
    scanf("%d",&N);
    while(choice!='Q'){

        if(N<0)
            printf("\nUndefined");
        else{
             for(int i=0;i<=N;i++)
                {
                    sum=sum+i;
                }
            printf("\nThe result is:%d",sum);
            sum=0;
        }

        printf("\nDo you want to continue?(Q to quit)");
       scanf("%s",&choice);

        if(choice!='Q'){
             printf("\nEnter an integer:");
            scanf("%d",&N);

        }
    }
    printf("\nGoodBye!");
    return 0;
}
