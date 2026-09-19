#include<stdio.h>
int main()
{int a[10],i,j,n,temp,rev=0,d,sum=0;
printf("enter number of odd roll nos elements :");
scanf("%d",&n);
printf("enter the elements=");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    temp=a[i];
    rev=0;
    while(temp!=0){
        d=temp%10;
        rev=rev*10+d;
        temp=temp/10;
    }
    if(a[i]==rev)
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
    else
    {
        a[i]=rev;
    }
    for(i=0;i<n;i++)
    printf("output is %d\n",a[i]);
}
return 0;
}
