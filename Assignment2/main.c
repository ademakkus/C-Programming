#include <stdio.h>
#include <stdlib.h>
int main()
{   int ordernumber;
    int order;
    char choice;
    double total=0.0,pay=0.0;
    printf("Welcome! How many drinks will be ordered?\n");
    scanf("%d",&ordernumber);
    printf("  MENU:\n  1. Espresso\n  2. Latte\n  3. Cappuccino\n  4. Tea\n");
    for(int i=1;i<=ordernumber;i++){
        scanf("%d",&order);
        if(order==1){    printf("\nYou have ordered one Espresso, which costs 4.5$\n");
             total=total+4.5;
        }
        else if(order==2)  {    printf("\nYou have ordered one Latte, which costs 5.5$\n");
             total=total+5.5;
        }
         else if(order==3){    printf("\nYou have ordered one Cappuccino, which costs 6.5$\n");
             total=total+6.5;
        }
        else if(order==4){    printf("\nYou have ordered one Tea, which costs 3.5$\n");
             total=total+3.5;
        }
    }
    printf("\nWould you like to split the bill between %d guests?\n",ordernumber);
    scanf("%s",&choice);
    if(choice=='Y'||choice=='y'){ pay=total/ordernumber;
        printf("\nThe amount that each guest needs to pay is: %.2f $",pay);
    }
    else if(choice=='N'||choice=='n'){
        pay=total;
        printf("\nThe total amount that you need to pay is: %.2f $",pay);
    }
 return 0;
}
