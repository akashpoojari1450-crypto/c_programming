#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    
    int result=sum(a,b);
    printf("The sum of the two numbers is %d",result);
    return 0;
}