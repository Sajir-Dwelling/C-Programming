//Unary Operators

#include<stdio.h>
int main()

{
    int a,b,c,d,e,f,g;

    printf("Enter the first value : ");
    scanf("%d",&a);

    b=++a;
    c=++b;
    d=++c;
    e=++d;
    f=++e;
    g=++f;

    printf("a= %d\n",a);
    printf("b= %d\n",b);
    printf("c= %d\n",c);
    printf("d= %d\n",d);
    printf("e= %d\n",e);
    printf("f= %d\n",f);
    printf("g= %d\n",g);

    return 0;
}
