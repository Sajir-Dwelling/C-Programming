#include<stdio.h>
int main()
{
    double a,b,c,d,x1,x2;
    printf("Enter the coefficients of(a,b,c) of the quadratic equation : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d=sqrt((b*b)-4*a*c);

    if(d>=0){
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("The x1 value is : %lf\n",x1);
    printf("The x2 value is : %lf\n",x2);
    }
    else{
    printf("The value is complex");
    }
    return 0;
}
