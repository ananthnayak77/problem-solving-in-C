#include<stdio.h>
int main()
{int a[10],i,n,sum=0,rev=0,d,temp;
printf("enter number of elements :");
scanf("%d",&n);
printf("enter the elements=");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    
    temp=a[i];
    rev=0;
    while(temp!=0)
    {
        d=temp%10;
        rev=rev*10+d;
        temp=temp/10;
    }
    if(a[i]<rev)
    {
        a[i]=rev;
        
    }
    else
    {
        sum=0;
        temp=a[i];
        while(temp!=0)
        {
            d=temp%10;
            sum=sum+d;
            temp=temp/10;
            

        }
        a[i]=sum;
        
    }
    printf("output is %d\n",a[i]);
}
return 0;
}

