#include<stdio.h>
int main()

{
    int stats;
    printf("Enter the stats : ");
    scanf("%d",&stats);

    if(stats==54)
    {
        printf("Yes, it is as u desired.\n");
        printf("U may proceed to the next game.\n");
    }

    else
    {
        printf("Sorry, the stats does not follow the number.\n");
        printf("U can not proceed to the next level.\n");
    }

return 0;

}
