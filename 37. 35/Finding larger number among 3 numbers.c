//defining larger number among three numbers by coding.

#include<stdio.h>
int main()

{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
        printf("Larger : %d\n",a);
    else if(b>a && b>c)
        printf("Larger : %d\n",b);
    else if(c>a && c>b)
        printf("Larger : %d\n",c);
    else
        printf("The numbers are equal");

    return 0;
}
