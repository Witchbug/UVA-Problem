#include <iostream>

using namespace std;

int main()
{
    int no,i,add,count,case_no=1,flag,temp;
    while(cin>>no, no>0)
    {
        add=1;
        count=1;
        flag=0;
        if(no!=1)
        {
            while(1)
            {
                temp=add;
                for(i=1; i<=add; i++)
                {
                    temp=temp+1;
                    if(temp>=no)
                    {
                        flag=1;
                        break;
                    }

                }
                add=temp;
                if(flag)
                    break;
                count++;
            }
        }

        if(add==1)
            count--;
        cout<<"Case"<<" "<<case_no<<": "<<count<<endl;
        case_no++;
    }
    return 0;
}
