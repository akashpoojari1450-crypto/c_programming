#include<stdio.h>
int main()
{
    int run;
    char *result;
    printf("Enter run scored by batsman:");
    scanf("%d",&run);
    result=(run>=100)?"century!":"not a century";
    printf("%s",result);
    return 0;
}