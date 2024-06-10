#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        sum=sum+n;
    }
    printf("Sum = %d",sum);
    return 0;
}