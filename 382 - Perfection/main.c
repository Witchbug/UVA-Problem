#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,i,j,k,num[102],sum;
    k=1;
    while(scanf("%lld",&n))
    {
        if(n==0)
         break;
        num[k]=n;
        k++;
    }
    printf("PERFECTION OUTPUT\n");
    for(j=1;j<k;j++)
    {
       sum=0;
        for(i=1;i*2<=num[j];i++)
        {
            if(num[j]%i==0)
                sum=sum+i;
        }
        if(sum==num[j])
            printf("%5lld  PERFECT\n",num[j]);
        else if(sum<num[j])
            printf("%5lld  DEFICIENT\n",num[j]);
        else
            printf("%5lld  ABUNDANT\n",num[j]);

    }
    printf("END OF OUTPUT\n");


    return 0;
}
