#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    switch(age)
    {
        case 10:
            printf("Not eligible to vote");
            break;
        case 15:
            printf("wait for three years");
            break;
        case 20:
            printf("You can vote");
            break;
        default:
            printf("Not a valid age");      
    }
    return 0;
}