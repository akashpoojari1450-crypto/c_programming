#include<stdio.h>
int main()
{
    int n;
    printf("Enetr the number");
    scanf("%d",&n);
    int * num=&n;

    printf("size of n is:%zu \n",sizeof(n));
    printf("Address of number:%p \n",&n);
    printf("(n>5)? 10:20 :%d \n",(n>5)? 10:20 );
    printf("converting into float:%f",(float)n);
    return 0;
}