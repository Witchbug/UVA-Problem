#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int decimal[50],i,j,x,y,k,m;
    while(!(cin>>x>>y).eof())
    {
        int b1[50]={0},b2[50]={0};
        i=1;
        while(x!=1)
        {
            b1[i]=x%2;
            x=x/2;
            i++;
        }
        b1[i]=1;

        j=1;
        while(y!=1)
        {
            b2[j]=y%2;
            y=y/2;
            j++;
        }
        b2[j]=1;

        if(j>i)
            m=j;
        else
            m=i;
        int p=1;
        for(k=m;k>=1;k--)
        {
            if(b1[k]==1 && b2[k]==1)
                decimal[p]=0;
            else
                decimal[p]=b1[k]+b2[k];
            p++;
        }
       int pwr=p-2;
       int sum=0;
       for(i=1;i<p;i++)
       {
             sum=sum+(decimal[i]*pow(2,pwr));
             pwr--;
       }
       cout<<sum<<endl;


    }
    return 0;
}
