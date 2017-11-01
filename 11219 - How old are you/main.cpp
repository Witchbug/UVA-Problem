#include <iostream>

using namespace std;

int main()
{
    char c;
    int n,dd1,mm1,yy1,dd2,mm2,yy2,age,d,m,count;
    cin>>n;
    count=1;
    while(n)
    {
        cin>>dd1>>c>>mm1>>c>>yy1;
        cin>>dd2>>c>>mm2>>c>>yy2;
        d=(dd1-dd2);
        if(d<0)
            mm1-=1;
        m=(mm1-mm2);
        if(m<0)
            yy1-=1;
        age=yy1-yy2;
        if(age>=0 && age<=130)
        cout<<"Case #"<<count<<": "<<age<<endl;
        else if(age>130)
            cout<<"Case #"<<count<<": Check birth date"<<endl;
        else
            cout<<"Case #"<<count<<": Invalid birth date"<<endl;
        count++;
        n--;
    }
    return 0;
}
