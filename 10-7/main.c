#include <stdio.h>
#include <stdlib.h>
int factN(int);
int combN(int, int);
int main()
{
    int n,r;
    printf("Enter n and r of Combination : ");
    scanf("%d%d",&n,&r);
    printf("Combinations : %d",combN(n,r));
    return 0;
}

int factN(int n)
{
    int x=1;
    for(int i=1; i<=n;i++)
        x*=i;
    return x;
}

int combN(int n, int r)
{
    return factN(n)/(factN(r)*factN(n-r));
}
