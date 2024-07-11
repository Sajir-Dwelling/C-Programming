/*now i am gonna calculate an area of a triangle which has lengths of
it's three line. */

#include<stdio.h>
int main()

{
    float a,b,c,s,area;

    printf("Enter the values : ");
    scanf("%f %f %f",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area is : %.2f",area);

    return 0;

}
