#include <stdio.h>
#include <stdlib.h>
int factN(int);
int permN(int, int);
int main()
{
    int n,r;
    printf("Enter n and r of Arrangements : ");
    scanf("%d%d",&n,&r);
    printf("Arrangements : %d",permN(n,r));
    return 0;
}

int factN(int n)
{
    int x=1;
    for(int i=1; i<=n;i++)
        x*=i;
    return x;
}

int permN(int n, int r)
{
    return factN(n)/factN(r);
}
