//turn a centigrade value to Fahrenheit.

#include<stdio.h>
int main()

{
    float c,F;
    printf("Enter a centigrade value : ");
    scanf("%f",&c);

    F=(1.8*c)+32;
    printf("The Fahrenheit value is : %f",F);

    return 0;
}
