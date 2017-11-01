#include <iostream>

using namespace std;

int main()
{
    long n,i,add,store,mini;
    int test,b;
    cin>>test;
    while(test)
    {
        cin>>n;
        store=n;
        mini=0;
        while(n>=store-44)
        {
            add=n;
            for(i=n; i!=0; i/=10)
            {
                b=i%10;
                add+=b;
            }

            if(store==add)
            {
                mini=n;

            }
            n--;
        }
        cout<<mini<<endl;


        test--;
    }
    return 0;
}
