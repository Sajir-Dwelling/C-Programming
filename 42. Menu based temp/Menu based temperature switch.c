//converting temperature by switch

#include<stdio.h>
int main()

{
    int a;
    float c,f;

    printf("Temperature conversion menu\n");
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");
    printf("Enter your choice : ");
    scanf("%d",&a);

    switch(a)

    {
    case 1:
        printf("Enter the Celsius value : %f\n",c);
        scanf("%f",&c);
        f=(1.8*c)+32;
        printf("The Fahrenheit value is : %.2f\n",f);
        break;

    case 2:
        printf("Enter the Fahrenheit Value : %f\n",f);
        scanf("%f",&f);
        c=(f-32)/1.8;
        printf("The Celsius value is : %.2f\n",c);
        break;

    default :
        printf("The option is not available\n");
    }


    return 0;
}
