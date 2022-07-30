#include <stdio.h>
#include <stdlib.h>
float sI (int, float, int);

int main()
{
    int x,z;
    float y;
    printf("Enter Principle, Rate of Interest and Time : ");
    scanf("%d%f%d",&x,&y,&z);
    printf("Simple Interest : %.2f",sI(x,y,z));
    return 0;
}

float sI(int p, float r, int t)
{
    return (p*r*t)/100;
}
