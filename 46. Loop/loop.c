#include<stdio.h>
int main()

{
    int a;
    printf("Enter a starting number : ");
    scanf("%d",&a);
    printf("Even Numbers\n");

    do
    {
        printf("%d\n",a);
        a=a+2;
    }while(a<=100);

return 0;
}
