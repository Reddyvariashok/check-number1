#include<stdio.h>
int main()
{
int a[100],i,j,n,temp=0;
printf("Enter the value of n");
scanf("%d",&n);
printf("Enter the array"); 
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]<a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}		
}	
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}