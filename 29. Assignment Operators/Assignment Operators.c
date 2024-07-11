#include<stdio.h>
int main()
 {
     int num1;
     float num2;

     printf("Enter the value : ");
     scanf("%d %f",&num1,&num2);

     num2/=num1;
     printf("The result is : %f",num2);

     return 0;
 }
