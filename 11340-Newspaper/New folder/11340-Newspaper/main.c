#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,k;

     scanf("%d",&n);
     while(n--)
     {
         scanf("%d",&k);
         k++;
         int value[k],new_k;
         new_k=k;
         char ch[k];
         while(k--)
         {
             scanf("%c %d",&ch[k-1],&value[k-1]);
         }
         while(new_k--)
         {
             printf("%c = %d\n",ch[new_k-1],value[new_k-1]);
         }

     }
    return 0;
}
