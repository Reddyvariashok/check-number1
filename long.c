
#include <stdio.h>
#include<string.h>
void main()
{
int s1,o1,max=0,j;
char a[100],b[100];
printf("\nEnter the first string:  ");
scanf("%s",a);
printf("\nEnter the second string:  ");
scanf("%s",b);
s1=strlen(a);
o1=strlen(b);
if(s1>o1)
{
max=s1;
}
else
{
max=o1;
}
for(j=0;j<max;j++)
{
if(a[j]==b[j])
{
printf("%c",a[j]);
}
else
{
break;
}
}
}