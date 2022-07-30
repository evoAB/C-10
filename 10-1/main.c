#include <stdio.h>
#include <stdlib.h>
float area (int);

int main()
{
    int r;
    printf("Enter the radius of circle : ");
    scanf("%d",&r);
    printf("Area of Circle : %.2f",area(r));
    return 0;
}

float area(int n)
{
    return 3.14*n*n;
}
