#include <stdio.h>
int main()
{
int n,i,x,sum=0;
scanf("%d\ns",&n);
for ( i = 0; i < n; i++)
{
 scanf("%d",&x);
 if (x==0||x==1)
 {
   sum=sum+x;
 }
}

if (sum==0)
{
   printf("Easy\n");
}
else
{
   printf("Hard\n");
}
return 0;
}