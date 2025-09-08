#include<stdio.h>
int main(){
    int a;
    printf("enter your age");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("Eligible to vote");
    }
    else if (a<=0)
    {
        printf("Error");
    }
    
    else {
        printf("Not eligible to vote");
    }
    return 0;
    
}