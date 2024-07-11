//defining log,log(10),exp value by programing

#include<stdio.h>
#include<math.h>

int main()

{
    float a;
    float b;
    float c;

    printf("Enter angle value : ");
    scanf("%f",&a);

    c=a*M_PI/180;
    b=tan(c);

    printf("Tangent of %f degree is : %f",a,b);

    return 0;

}
