/*now i will try to do some arithmetic programs.
so let's start with sum, then i will do the minus,
multiplication, division, modulus and also the average.*/

#include<stdio.h>
int main()

{
    int num1, num2, sum, minus, multiplication, division, modulus;
    float avg;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1,&num2);

    sum = num1 + num2;
    printf("The value of the sum is : %d\n",sum);

    minus = num1 - num2;
    printf("The minus value is : %d\n",minus);

    multiplication = num1 * num2;
    printf("The multiplication value is : %d\n",multiplication);

    division = num1/num2;
    printf("The division value is : %d\n",division);

    modulus = num1 % num2;
    printf("The modulus value is : %d\n",modulus);

    avg = (float)sum/2;
    printf("The average value is : %.1f",avg);

    return 0;

}
