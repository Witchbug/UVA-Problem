#include <iostream>


using namespace std;

int main()
{
    int t,t1,t2,f,a,c1,c2,c3,c_avg,result,count;
    cin>>t;
    count=1;
    while(t--)
    {
        cin>>t1>>t2>>f>>a>>c1>>c2>>c3;
        if(c1<=c2 && c1<=c3)
            c_avg=((c2+c3)/2);
        else if(c2<=c1 && c2<=c3)
            c_avg=((c1+c3)/2);
        else
            c_avg=((c1+c2)/2);
        result=t1+t2+f+a+c_avg;
         if(result>=90)
            cout<<"Case "<<count<<": A"<<endl;
         else if(result>=80 && result<90)
            cout<<"Case "<<count<<": B"<<endl;
         else if(result>=70 && result<80)
            cout<<"Case "<<count<<": C"<<endl;
         else if(result>=60 && result<70)
            cout<<"Case "<<count<<": D"<<endl;
         else if(result<60)
            cout<<"Case "<<count<<": F"<<endl;
         count++;

    }
    return 0;
}
