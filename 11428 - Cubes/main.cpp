#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,y,no,sub,flag;
    while(cin>>no, no>0)
    {
        flag=0;
        for(x=1; x<60 ;x++)
        {
            for(y=0; y<x ;y++)
            {
                sub=(pow(x,3)-pow(y,3));
                if(sub==no)
                {
                    cout<<x<<" "<<y<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag==0)
            cout<<"No solution"<<endl;
    }
    return 0;
}
