#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age>=18){
      if(age>=60)
      printf("Senior citizon");
      else
      printf("eligible to vote");
    }
    else{
        printf("Not eligible to vote");
    
        if(age<13)
           printf("Teenager");
        else
           printf("not teenager");
    }
return 0;   
}