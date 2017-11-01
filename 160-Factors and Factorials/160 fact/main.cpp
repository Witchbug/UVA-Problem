#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    long n,i,j,k,m;
    while(cin>>n, n!=0)
    {
        long fac[101]={0},prime[26]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
        for(i=2; i<=n; i++)
        {
            k=i;
            while(k>=1)
            {
                for(j=2; j<=k; j++)
                {
                    if(k%j==0)
                    {
                        for(m=0;m<25;m++)
                        {
                            if(j==prime[m])
                            {
                                fac[m]++;
                                break;
                            }

                        }
                      break;
                    }

                }
                k=k/j;
            }

        }
        int count=0;
        printf("%3d! =",n);
        for(i=0;fac[i]!=0;i++)
        {
            if(count==15)
                printf("\n%6c",' ');
           printf("%3d",fac[i]);
           count++;
        }
        printf("\n");

    }
    return 0;
}
