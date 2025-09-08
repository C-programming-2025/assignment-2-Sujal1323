#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter a number");
    scanf("%d",&a);
    if (a<0)
    {
        b=a*(-1);
        printf("%d", b);
    }
    else{
        printf("%d",a);
    }
    return 0;
    
}