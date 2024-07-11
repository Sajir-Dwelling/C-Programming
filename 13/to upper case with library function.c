/*in this program, i will try to do some uppercase-lowercase
letter conversion. We can also do the opposite matter*/

#include<stdio.h>
int main()

{
    char upper,lower;
    printf("Enter an uppercase character : ");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("The lowercase letter is : %c",lower);

    return 0;
}
