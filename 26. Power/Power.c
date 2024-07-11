#include<stdio.h>
int main()

{
    int a;
    int b;
    int c;

    printf("Enter a value : ");
    scanf("%d",&a);
    scanf("%d",&b);

    c=pow(a,b);
    printf("The power value is : %d",c);

    return 0;
}
