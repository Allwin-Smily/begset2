#include<stdio.h>
int main(void)
{
int i,first,last;
scanf("%d%d",&first,&last);
for(i=first+1;i<last;i++)
{
if(i%2==0)
{
printf("%d ",i);
}
}

return 0;
}
