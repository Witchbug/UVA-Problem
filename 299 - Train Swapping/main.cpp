#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,l,permutation[50],s,i,j;
    cin>>n;
    while(n--)
    {
        cin>>l;
        s=0;
        for(i=0; i<l; i++)
        {
            cin>>permutation[i];
        }
        for(i=0; i<l-1; i++)
        {
            for(j=i+1; j<l; j++)
            {
                if(permutation[i]>permutation[j])
                {
                    swap(permutation[i],permutation[j]);
                    s++;
                }
            }


        }
        cout<<"Optimal train swapping takes "<<s<<" swaps."<<endl;
    }
    return 0;
}
