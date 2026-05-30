#include<stdio.h>
int factusingrecursion(int n)
{
    if(n==0)
{
    return 1;
}
else{
    return n*factusingrecursion(n-1);
}
}
int factusingiteration(int n)
{
    int res=1,i;
    for(i=2;i<=n;i++)
    {
        res*=i;
    }
    return res;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial using recursion is %d\n",factusingrecursion(n));
    printf("Factorial using iteration is %d\n",factusingiteration(n));
}

