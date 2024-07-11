#include<stdio.h>
int main()

{
    double num1,num2;
    char sign;
    printf("Enter operator (+,-,/,*) : ");
    scanf("%c",&sign);
    printf("Enter two numbers : ");
    scanf("%lf %lf",&num1,&num2);

    switch(sign)
    {
    case '+':
    printf("The value is %lf+%lf : %lf\n",num1,num2,num1+num2);
    break;

    case '-':
    printf("The value is %lf-%lf : %lf\n",num1,num2,num1-num2);
    break;

    case '/':
    printf("The value is %lf/%lf : %lf\n",num1,num2,num1/num2);
    break;

    case '*':
    printf("The value is %lf*%lf : %lf\n",num1,num2,num1*num2);
    break;

    default:
        printf("The value is not defined");


    }

    return 0;

}
