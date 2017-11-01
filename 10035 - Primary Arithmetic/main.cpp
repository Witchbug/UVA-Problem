#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int a,b;
    int i,k,j,carry;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        unsigned int  x[10]={0},y[10]={0};
        if(a<b)
           swap(a,b);
        k=0;
        for(i=a,j=b; i!=0; i/=10,j/=10)
        {
            x[k]=i%10;
            if(j>0)
            {
               y[k]=j%10;
            }

            k++;
        }
        carry=0;
        for(i=0; i<k; i++)
        {

            if(x[i]+y[i]>9)
            {
                x[i+1]+=1;
                carry++;
            }

        }
        if(carry==0)
          cout<<"No carry operation."<<endl;
         else if(carry==1)
            cout<<"1 carry operation."<<endl;
         else
            cout<<carry<<" carry operations."<<endl;
    }
    return 0;
}
