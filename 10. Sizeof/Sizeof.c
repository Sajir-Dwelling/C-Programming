#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("Size of integer : %d bytes\n",sizeof(a));
    printf("Size of float : %d bytes\n",sizeof(b));
    printf("Size of character : %d bytes\n",sizeof(c));
    printf("Size of double : %d bytes\n",sizeof(d));

    return 0;
}
