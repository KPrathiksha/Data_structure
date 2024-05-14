#include<stdio.h>
int main()
{
    int n,s,i,a[100];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to find:");
    scanf("%d",&s);
    int low=0;
    int high=n-1;
    int res=-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(a[mid]==s)
        {
            res=mid;
            break;
        }
        if(a[mid]<s)
            low=mid+1;
        else
            high=mid-1;
    }
    if(res==-1)
        printf("Not found");
    else
        printf("Found at %d",res);
    return 0;
}