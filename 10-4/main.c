#include <stdio.h>
#include <stdlib.h>
void naturalN(int);
int main()
{
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    naturalN(l);
    return 0;
}

void naturalN(int n)
{
    printf("Natural Numbers : ");
    for(int i=1; i<=n;i++)
        printf("%d ",i);
}
