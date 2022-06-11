#include <stdio.h>
int main()
{
    int n,s=0;
    do{
        printf("Enter a number n: ");
        scanf("%d",&n);
        s=s+n;

    }
    while(n!=0);
    printf("Sum of n is %d",s);
    return 0;
}
