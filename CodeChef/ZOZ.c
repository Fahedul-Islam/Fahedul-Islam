#include<stdio.h>
int main()
{
    int t,n,k,i,j,l,p,count=0;
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        scanf("%d %d",&n,&k);
        int a[n];
        int sum=0;
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[j]);
            sum= sum+a[j];
        }
        count=0;
        for ( l= 0; l < n; l++)
        {
           p=2*a[l]+k-sum;
           if (p>0)
           {
              count++;
           }
        }
        printf("%d\n",count);
        
    }
   return 0; 
}
