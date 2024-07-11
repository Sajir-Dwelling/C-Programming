#include<stdio.h>
int main()

{
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);

    c=a&b;
    printf("The value is : %d\n",c);

    c=a|b;
    printf("The value is : %d\n",c);

    c=a^b;
    printf("The value is : %d\n",c);

    return 0;




}
