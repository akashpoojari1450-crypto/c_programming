#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        printf("\n");
        int j=1;
        while(j<=i)
        {
            printf("%d",j);
            j=j+1;

        }
    
        i=i+1;
    }

}