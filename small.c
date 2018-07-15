#include<stdio.h>
void main()
{
    int a[100],i,j,x,t,y;
    printf("enter the xand y values");
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<y;j++)
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    for(i=0;i<k-1;i++)
   printf("%d ",a[i]);
}
return 0;