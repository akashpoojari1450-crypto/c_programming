#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the value of n:");
    scanf("%d",&n);     
    printf("Enter the value of m:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==3)
            {
                break;  
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;

        }