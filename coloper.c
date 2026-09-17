#include<stdio.h>
int main()
{int a[10][10],i,j,n,prod=1;
printf("enter the dimension of elements");
scanf("%d",&n);
printf("enter the elements=");
for(i=0;i<n-1;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n-1;i++)
{   prod=1;
    for(j=0;j<n;j++)
    {
        prod=prod*a[i][j];
        a[n-1][j]=prod;
       
    }
    
    
}
printf("output is\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
return 0;
}
