#include<stdio.h>
int main()

{
    char a;
    printf("Enter a letter : ");
    scanf("%c",&a);

    switch(a)
    {
    case 'A' :
    case 'E' :
    case 'I' :
    case 'O' :
    case 'U' :
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :

        printf("Vowel");
        break;

    default:
        printf("Consonant");

    }


    return 0;

}
