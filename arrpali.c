#include <stdio.h>
int main()
{int a[10],i,n,sum=0,rev=0,d,temp;
    printf("enter number of elements :");
    scanf("%d",&n);
    printf("enter the elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {rev=0,temp=a[i];
     while(temp>0)
    {
        d=temp%10;
        rev=rev*10+d;
        temp=temp/10;
    }
    
    
    if(a[i]==rev)
    {
    printf("%dthe array is palindrome",a[i]);
    sum=sum+a[i];
    }
    else
    {
    printf("%d the array is not palindrome",a[i]);
    }}
    printf("the sum of palindrome numbers in the array is %d",sum);
    
    return 0;
}