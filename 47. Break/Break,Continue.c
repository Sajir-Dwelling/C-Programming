#include<stdio.h>
int main()

{
    char a;
    printf("Enter a letter : ");
    scanf("%c",&a);

    if(a=='A'||a=='a')
        printf("Vowel\n");


    else if(a=='E'||a=='e')
        printf("Vowel\n");


    else if(a=='I'||a=='i')
        printf("Vowel\n");

    else if(a=='O'||a=='o')
        printf("Vowel\n");

    else if(a=='U'||a=='u')
        printf("Vowel\n");

    else
        printf("Consonant");

    return 0;


}
