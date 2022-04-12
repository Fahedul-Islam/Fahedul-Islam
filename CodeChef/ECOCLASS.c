#include <stdio.h>
int main()
{
int t,n,i,j,k,count=0;
scanf("%d",&t);
if (1<=t&&t<=10)
{
  for ( i = 0; i < t; i++)
  {
    scanf("%d",&n);
    int s[n];
    for ( j = 0; j < n; j++)
    {
      scanf("%d",&s[j]);
    }
    int d[n];
    for ( k = 0; k < n; k++)
    {
     scanf("%d",&d[k]);
    }
  
    count=0;
      for ( j = 0,k=0; j<n,k<n; j++,k++)
{
  if (s[j]==d[k])
  {
    ++count;
  }
 }
 printf("%d\n",count);
}
}   
return 0;
}