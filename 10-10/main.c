#include <stdio.h>
#include <stdlib.h>
void primeFN(int);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Prime factors : ");
    primeFN(n);
    return 0;
}

void primeFN(int k)
{
    int i=2;
    while(k!=1)
    {
        if(k%i!=0)
            i++;
        k=k/i;
        printf("%d, ",i);

    }
}
