#include<stdio.h>
int main()

{
    double si,p,n,r;
    printf("Enter the principle amount : ");
    scanf("%lf",&p);
    printf("Enter the amount rate : ");
    scanf("%lf",&r);
    printf("Enter the time according to the year : ");
    scanf("%lf",&n);

    si=(p*n*r)/100;

    printf("Simple Interest : %lf",si);

    return 0;
}
