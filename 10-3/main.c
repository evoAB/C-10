#include <stdio.h>
#include <stdlib.h>
int eo(int);

int main()
{
    int m;
    printf("Enter any number : ");
    scanf("%d",&m);
    printf("Even = 1 & Odd = 0 : %d",eo(m));
    return 0;
}

int eo(int n)
{
    if(n%2)
        return 0;
    return 1;
}
