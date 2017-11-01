#include <iostream>

using namespace std;

int main()
{
    long long n,i,j,sum,digit;
    while(cin>>n)
    {
        if(n==0)
        break;
        digit=n;
        while(digit>9)
        {
             sum=0;
            for(i=digit; i!=0; i/=10)
            {
                j=i%10;
                sum+=j;

            }
            digit=sum;
        }
        cout<<digit<<endl;

    }
    return 0;
}
