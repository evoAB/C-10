#include <stdio.h>
#include <stdlib.h>
void oddN(int);
int main()
{
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    oddN(l);
    return 0;
}

void oddN(int n)
{
    printf("Odd Numbers : ");
    for(int i=1; i<=2*n;i++)
        if(i%2)
            printf("%d ",i);
}
