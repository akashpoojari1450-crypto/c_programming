#include<stdio.h>
int head(int n)
{
    if(n==0)
    return;
    printf("%d",n);
    head(n-1);
}
int main()
{
    head(7);
    return 0;   

}