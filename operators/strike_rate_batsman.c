#include<stdio.h>
int main()
{
    int run,ball;
    printf("Enetr run scored by batsman");
    scanf("%d",&run);
    printf("Enetr ball faced by batsman");
    scanf("%d",&ball);
    if(ball>0)
    {
         float strike_rate=((float)run/ball)*100;
         printf("Strike rate of batsman is %f",strike_rate);
    }
    else{
    printf("batsman out");
    }
    return 0;
}