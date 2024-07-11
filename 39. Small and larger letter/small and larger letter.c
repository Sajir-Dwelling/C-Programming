//finding small and capital letter by coding.

#include<stdio.h>
int main()

{
    char a;
    printf("Enter first the letter : ");
    scanf("%c",&a);

    if(a>='a' && a<='z')
        printf("This is Small letter");
    else if(a>='A' && a<='Z')
        printf("This is Capital Letter");

    return 0;

}
