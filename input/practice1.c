#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i==3)
        {

        
        break;
        }
        printf("%d \n",i);
    }
    printf("%d \n");
    for(int i=0;i<n;i++)
    {
        if(i==3)
        {

        
        continue;
        }
        printf("%d \n",i);
    }
    printf("%d \n");
    for(int i=0;i<n;i++)  {
        if(i==3)
        {
            goto skip;
        }
        printf("%d \n",i);
    }
    goto skip;
skip:
    printf("This will skip if i is 3\n");

}