#include<stdio.h>
int main(void)
{
int i,first,last;
scanf("%d%d",&first,&last);
for(i=first;i<last;i++)
{
if(i%2==1)
{
printf("%d ",i);
}
}

return 0;
}
