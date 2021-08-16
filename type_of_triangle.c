#include <stdio.h>
int main()
{
    
    int side1, side2, side3;
    printf("\n\n\tThe code to find type of triangle");
    printf("\nPlease input first side\n");
    scanf("%d", &side1);
    printf("Please input second side\n");
    scanf("%d", &side2);
    printf("Please input third side\n");
    scanf("%d", &side3);
    if (side1 == side2 && side2 == side3)
        printf("the triangle is a equilateral triangle");
    else if (side1 == side2 || side2 == side3 || side1 == side3)
        printf("The triangle is isocelles triangle");
    else
        printf("The triangle is a scalene triangle");
    if (side1*side1 == side2*side2 + side3*side3 || side2*side2 == side3*side3 + side1*side1 || side3*side3 == side2*side2 + side1*side1 )
    {
        printf("\nThe tringle is a Right angled Triangle");
    }
    else
        printf("\nThe triangle is not a Right Angled Triangle");

    
    return 0;
}