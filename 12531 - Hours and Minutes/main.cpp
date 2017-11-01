#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        n%6==0 ? cout<<"Y"<<endl : cout<<"N"<<endl ;
    }
    return 0;
}
s
