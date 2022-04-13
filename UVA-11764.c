#include <stdio.h>
int main() 
{ 
   int t,n,i,j,k,h=0,l=0;
   scanf("%d",&t);
   if (t<30)
   {
      for ( i = 0; i <t; i++)
      {
         scanf("%d",&n);
         int w[n];
         for ( j = 0; j < n; j++)
         {
            scanf("%d",&w[j]);
         }
         l=0;
         h=0;
         for ( k = 0; k < n-1;k++)
         {
            if (w[k]<w[k+1])
            {
               h++;
            }
            else if (w[k]>w[k+1])
            {
             l++;
            }
            
         }
       printf("Case %d: %d %d\n",i+1,h,l);  
         
      }
      
   }
   return 0;
}
