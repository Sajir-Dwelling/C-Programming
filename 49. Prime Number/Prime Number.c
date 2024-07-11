#include<stdio.h>
int main()
{
    int num,count=0,i;
    printf("Enter your desired positive number : ");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }

    }

        if(count==0)
            printf("This is a Prime Number");
        else
            printf("This is not Prime Number");

    return 0;

}
