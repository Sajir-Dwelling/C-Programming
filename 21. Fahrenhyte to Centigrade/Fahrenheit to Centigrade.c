#include<stdio.h>
int main()

{
    float f,c;
    printf("Enter the Fahrenheit value : ");
    scanf("%f",&f);

    c=(f-32)/1.8;
    printf("The Centigrade value is : %.2f",c);

    return 0;
}
