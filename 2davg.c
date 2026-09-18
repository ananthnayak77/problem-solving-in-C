#include<stdio.h>
int main ()
{int a[10][10],i,j,n,avg=0,sum=0,add=0;
printf("enter the dimension of elements");
scanf("%d",&n);
printf("enter the elements=");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        sum=sum+a[i][j];
        avg=sum/(n*n);
    }
}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>avg)
            {  
               add=add+sum; 
               a[i][j]=add; 
            }
        
        }
    }
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
return 0;
}