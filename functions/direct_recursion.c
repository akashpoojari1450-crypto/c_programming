//two types are there in direct recursion
//1. head recursion

#include<stdio.h>
int show(int n)
{
if(n==0)
return 1;

show(n-1);
printf("%d",n);
}
int main()
{
    show(7);
    return 0;   

}