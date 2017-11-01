#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string t,j;
    int i,n,cnt,sum_t,sum_j,len_t,len_j;
    cnt=1;
    cin>>n;
    getchar();
    while(n)
    {
        getline(cin,t);
        getline(cin,j);
        len_t=t.length();
        len_j=j.length();
        sum_t=0;
        sum_j=0;
        for(i=0;i<len_t;i++)
        {
            if(t[i]!=' ')
                sum_t+=t[i];
        }
        for(i=0;i<len_j;i++)
        {
            if(j[i]!=' ')
                sum_j+=j[i];
        }


            if(sum_t!=sum_j)
                cout<<"Case "<<cnt<<": Wrong Answer"<<endl;
            else if(len_j==len_t && sum_j==sum_t)
                cout<<"Case "<<cnt<<": Yes"<<endl;
            else
                cout<<"Case "<<cnt<<": Output Format Error"<<endl;
        cnt++;
        n--;
    }
    return 0;
}
