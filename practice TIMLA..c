#include<stdio.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    int j,i,small,key,low=0,high=n-1,mid,flag;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<j;i++)
        {
            if(a[j]<a[i])
            {
                small=a[j];
                a[j]=a[i];
                a[i]=small;
            }
        }
    }
    printf("Enter key:");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(int)(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==1)
    {
        printf("key found");
    }
    else
    {
        printf("key not found");
    }
}
