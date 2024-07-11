#include<stdio.h>
int main()

{
    int a;
    printf("Enter the year : ");
    scanf("%d",&a);

    if(a%400==0)
        printf("This is Leap Year");
    else if(a%4==0 && a%100!=0)
        printf("This is Leap Year");
    else
        printf("This is not the Leap Year");

    return 0;
}
