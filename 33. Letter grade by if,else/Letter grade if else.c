//getting letter grade by programing

#include<stdio.h>
int main()

{
    float a;
    printf("Enter your marks : ");
    scanf("%f",&a);

    if(a>=80)
        printf("You got A+\n");
    else if(a>=70 && a<80)
        printf("You got A\n");
    else if(a>=60 && a<70)
        printf("You got A-\n");
    else if(a>=50 && a<60)
        printf("You got B");
    else
        printf("You failed\n");

    return 0;
}
