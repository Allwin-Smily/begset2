#include<stdio.h>
int main(void)
{
int i,tot=1,base,power;
scanf("%d",&base);
scanf("%d",&power);
for(i=1;i<=power;i++)
{
tot=tot*base;
}
printf("%d",tot);
return 0;
}
