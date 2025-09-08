#include<stdio.h>
int main(){
    int a;
    int i;
    int fact=1;
    printf("Enter a positive integer");
    scanf("%d",&a);
    i=a;
    if (a<=0)
    {
        printf("Please enter a positive integer");
    }
    else{
    while (i>0)
    {
        fact=fact*i;
        i--;
    }
}
    printf("%d",fact);
    return 0;
    

}