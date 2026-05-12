#include<stdio.h>
int main()
{
    char ch[20];
    printf("Enetr your name: ");
    fgets(ch,sizeof(ch),stdin);
    printf("Hello,%s",ch);
    return 0;
}