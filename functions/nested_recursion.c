#include<stdio.h>
int nested(int n)
{
    if(n>100)
    {
        return n-10;
    }
    return  nested(nested(n+11));
}
int main()
{
    printf("%d",nested(77));
    return 0;

}