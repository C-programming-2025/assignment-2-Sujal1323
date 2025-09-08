#include<stdio.h>
int main(){
    int a;
    int i;
    int fact=1;
    printf("Enter a number");
    scanf("%d",&a);
    i=a;
    do
    {
        fact=fact*i;
        i--;
    } while (i>0);
    printf("%d",fact);
    
    return 0;
    

}