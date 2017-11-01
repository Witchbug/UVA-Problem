#include <iostream>

using namespace std;

int main()
{

    int n,in,even,odd,i,a,b,c,d,check,add;
    cin>>n;
    while(n)
    {
        cin>>a>>b>>c>>d;
        even=0;
        odd=0;
        check=4;
        for(i=a;i!=0;i/=10)
        {
            in=i%10;
            check%2==0 ? even+=in : odd+=(((in*2)/10)+((in*2)%10)) ;
            check--;

        }
        check=4;
        for(i=b;i!=0;i/=10)
        {
            in=i%10;
            check%2==0 ? even+=in : odd+=(((in*2)/10)+((in*2)%10)) ;
            check--;

        }
        check=4;
        for(i=c;i!=0;i/=10)
        {
            in=i%10;
            check%2==0 ? even+=in : odd+=(((in*2)/10)+((in*2)%10)) ;
            check--;

        }
        check=4;
        for(i=d;i!=0;i/=10)
        {
            in=i%10;
            check%2==0 ? even+=in : odd+=(((in*2)/10)+((in*2)%10)) ;
            check--;

        }
        add=even+odd;
        add%10==0 ? cout<<"Valid"<<endl : cout<<"Invalid"<<endl ;
        n--;

    }

    return 0;
}
