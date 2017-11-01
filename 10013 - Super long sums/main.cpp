#include <iostream>

using namespace std;

int x[1000001],y[1000001],ans[1000001];

int main()
{
    long long i,m,j,t;
    int sum,carry;
    cin>>t;
    for(j=0;j<t;j++)
    {
          if(j) cout<<endl;
          cin>>m;
          for(i=0;i<m;i++)
          {
              cin>>x[i]>>y[i];
          }
          carry=0;
          for(i=m-1;i>=0;i--)
          {
             sum=x[i]+y[i]+carry;
             if(sum>9)
             {
                 ans[i]=(sum%10);
                 carry=1;
             }
             else
             {
                 ans[i]=sum;
                 carry=0;
             }
          }
          for(i=0;i<m;i++)
          {
              cout<<ans[i];
          }
          cout<<endl;

    }

    return 0;
}
