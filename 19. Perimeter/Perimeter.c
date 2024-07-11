//calculating perimeter of a circle

#include<stdio.h>
#include<math.h>

int main()
{
    float r,perimeter;
    printf("Enter the radius : ");
    scanf("%f",&r);

    perimeter=2*M_PI*r;
    printf("The Perimeter is : %.2f",perimeter);

    return 0;
}
