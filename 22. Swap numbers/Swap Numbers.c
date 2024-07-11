//swapping numbers by programming

#include<stdio.h>
int main()
 {
     int num1;
     int num2;
     int num3;

     printf("Enter the values : ");
     scanf("%d %d %d",&num1,&num2,&num3);

     int temp;

     temp=num1;
     num1=num2;
     num2=num3;
     num3=temp;

     printf("num1 : %d\n",num1);
     printf("num2 : %d\n",num2);
     printf("num3 : %d",num3);

     return 0;

    }
