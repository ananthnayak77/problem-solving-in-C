#include<stdio.h>
int main()
{int a[10],i,j,n,sum=0;
printf("enter number of elements :");
scanf("%d",&n);
printf("enter the elements=");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<=a[i];j++)
    {
        if(a[i]%j==0)
        {
            sum=sum+j;
            a[i]=sum;
        }
    }
    if(sum>a[i])
    {
        printf("output is %d",a[i]);
    }
    else if(sum<a[i])
    {
        printf("output is %d",a[i]);
    }
    sum=0;
    }
return 0;
}
