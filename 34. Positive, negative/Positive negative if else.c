//defining positive and negative number by c programing

#include<stdio.h>
int main()

{
    float a;
    printf("Enter a number : ");
    scanf("%f",&a);

    if(a>0)
       {
        printf("The number is positive\n");
        printf("Because it is greater than 0\n");

       }
    else if(a<0)
    {
        printf("The number is negative\n");
        printf("Because it is smaller than 0\n");
    }

    else
        {
            printf("The number is 0\n");
            printf("Which is not either positive or negative\n");
        }

        return 0;

}
