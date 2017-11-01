#include <iostream>

using namespace std;

int main()
{
    long long int i,n,ugly;
    i=2; n=16;
    while(n)
    {
       if( i%2==0 || i%3==0 && i%4==0 || i%5==0 || i%6==0 || i%8==0 || i%9==0)
       {
           if(i%7!=0)
           {
           cout<<"n= "<<n;
           cout<<"  i= "<<i<<endl;
           ugly=i;
           cout<<"The 1500'th ugly number is "<<ugly<<"."<<endl;
           n--;
           }

       }

       i++;
    }

    return 0;
}
