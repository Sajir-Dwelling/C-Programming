//Calculating area of a circle by programing

#include<stdio.h>
int main()

{
    float r,area,PI=3.1416;
    printf("Enter the radius : ");
    scanf("%f",&r);

    area=PI*r*r;
    printf("The area is : %f",area);

    return 0;
}
