#include<stdio.h>
int main(){
    int a;
    int i=1;
    printf("enter a positive integer");
    scanf("%d",&a);
    if (a<=0)
    {
        printf("Please enter a positive number");
    }
    else{
    
    while (i<=10)
    {
        printf("%d\n",a*i);
        i++;
    }
}
    
    
    
    return 0;
    
}