#include <iostream>

using namespace std;

int main()
{
    int n,k,sum,i;
    sum=0;
    while(!(cin>>n>>k).eof())
    {
        i=n/k;
        sum=sum+i;
        while(i>1)
        {
            i=i/k;
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
