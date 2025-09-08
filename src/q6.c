#include<stdio.h>
int main(){
    int a;
    int i=1;
    printf("enter a number");
    scanf("%d",&a);
    do
    {
        printf("%d\n",a*i);
        i++;
    } while (i<=10);
    
    return 0;
    
}