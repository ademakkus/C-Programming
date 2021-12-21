#include <stdio.h>
#include <stdlib.h>

int main()
{
    int speed;
    printf("Enter wind speed:");
    scanf("%d",&speed);
    if(speed<25)
        printf("Not strong wind");
    else if(speed<40)
        printf("Strong wind");
    else if(speed<55)
        printf("Gale");
    else if(speed<73)
        printf("Whole Gale");
    else
        printf("Hurricane");
    return 0;
}
