/*now i will try to print my name.
here i will have to use new things like gets,fgets,puts and getchar.
lets see how fun it is.*/

#include<stdio.h>
int main()
{
    char name[60];
    printf("Enter your name : ");
    fgets(name, sizeof(name),stdin);
    printf("The name is : ");
    puts(name);
    return 0;
}
