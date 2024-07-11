#include<stdio.h>
int main()

{
    float a,b;
    printf("Enter the first number : ");
    scanf("%f",&a);

    printf("Enter the second number : ");
    scanf("%f",&b);

    if(a>b)
        printf("Larger : %f\n",a);
    else if(a<b)
        printf("Larger : %f\n",b);
    else
        printf("The numbers are equal\n");

    return 0;

}
