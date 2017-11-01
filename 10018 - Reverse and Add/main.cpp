#include <iostream>
using namespace std;
int main()
{
    long int count,add,num,rev,case_no,j,k,d;
    cin>>case_no;
    while(case_no)
    {

        cin>>num;
        count=0;
        rev=0;
        for(j=num; j!=0; j=j/10)
        {
            d=j%10;
            rev=rev*10+d;
        }
        if(num!=rev)
            for(k=0; k<1000; k++)
            {
                add=num+rev;
                count++;
                rev=0;
                num=add;
                for(j=num; j!=0; j=j/10)
                {
                    d=j%10;
                    rev=rev*10+d;
                }
                if(num==rev)    break;
            }
        cout<<count<<" "<<num<<endl;
        case_no--;
    }
    return 0;
}
