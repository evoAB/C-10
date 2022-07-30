#include <stdio.h>
#include <stdlib.h>
int checkN(int, int);
int main()
{
    int m,n;
    printf("Enter a number and digit : ");
    scanf("%d%d",&m,&n);
    if(checkN(m,n))
        printf("The given digit is present in a number.");
    else
        printf("The given digit is not present in a number.");

    return 0;
}

int checkN(int a, int b)
{
    int rem;
    while(a)
    {
        rem=a%10;
        if(b==rem)
            return 1;
        a/=10;
    }
    return 0;
}
