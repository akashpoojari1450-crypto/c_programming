#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    printf("The numbers are:%d\n",i+1);
    return 0;
}