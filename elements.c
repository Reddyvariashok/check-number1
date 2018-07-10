#include <stdio.h>
int main(void) {
	
	int n,k,i,a[100],temp;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
return 0;
}