#include <stdio.h>
#include <stdlib.h>
int factN(int);
int main()
{
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    printf("Factorial : %d",factN(l));
    return 0;
}

int factN(int n)
{
    int x=1;
    for(int i=1; i<=n;i++)
        x*=i;
    return x;
}
