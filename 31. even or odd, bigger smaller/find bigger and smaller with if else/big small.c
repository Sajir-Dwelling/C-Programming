/*defining the larger and smaller number by if else
function in c programing.*/

#include<stdio.h>
int main()

{
    int a,b;

    printf("Enter the first value : ");
    scanf("%d",&a);

    printf("Enter the second value : ");
    scanf("%d",&b);

    if(a>b)
        printf("The first value is larger : %d\n",a);

    else if(a<b)
        printf("The second value is bigger : %d\n",b);

    else
        printf("The numbers are equal.");

    return 0;

}
