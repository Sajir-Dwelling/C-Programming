/*now i will try to calculate some area values by programing.
it will be like area of triangle or a square type of spaces.*/

#include<stdio.h>
int main()

{
    int base;
    int height;
    int area;
    //this an area for triangle.
    printf("Enter the Base and Height value : ");
    scanf("%d %d",&base , &height);
    area = (float)1/2*base*height;

    printf("The area is : %d",area);

    return 0;

}
