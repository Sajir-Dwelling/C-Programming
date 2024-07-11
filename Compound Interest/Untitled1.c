#include<stdio.h>
int main()
{
    double amount,c,p,n,r;
    printf("Enter the principle amount : ");
    scanf("%lf",&p);
    printf("Enter rate : ");
    scanf("%lf",&r);
    printf("Enter the time compare to the year : ");
    scanf("%lf",&n);

    amount= p*((pow((1+r/100),n)));
    c=amount-p;

    printf("Compound Interest : %lf\n",c);
    return 0;

}
