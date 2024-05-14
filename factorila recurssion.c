#include<stdio.h>
int factorial(int x);
int main()
{
    int x,fact=1;
    printf("Enter an integer:");
    scanf("%d",&x);
    printf("Factorial of %d is %d",x,factorial(x));
    return 0;
}
int factorial(int x)
{
    if(x>=1)
      return x*factorial(x-1);
    
    else
      return 1;
    
}