#include<stdio.h>
#include<math.h>

int main()
 {
     float a;
     float b;
     printf("Enter a value : ");
     scanf("%f",&a);

     b=ceil(a);
     printf("Ceiling value of %f is : %.1f",a,b);

     return 0;
 }
