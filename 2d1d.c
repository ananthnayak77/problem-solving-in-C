#include<stdio.h>
int main()
{int a[10][10],i,j,n,d,sum=0,temp;
printf("enter the dimension of even roll nos elements");
scanf("%d",&n);
printf("enter the elements=");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);}
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                temp=a[i][j];
                sum=0;
                while(temp!=0)
                {
                d=temp%10;
                sum=sum+d;
                temp=temp/10;
                }
                a[i][j]=sum;
            }
            else 
            {
                continue;
            }
        }
    }
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
return 0;
}
        
