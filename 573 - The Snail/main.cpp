#include <iostream>

using namespace std;

int main()
{
    double h,u,d,f,in_h,dis_climb,after_climb,after_slide;
    int day,flag;
    while(cin>>h>>u>>d>>f)
    {
        if(h==0)
            break;
        in_h=0.0;
        day=1;
        f=(f*u)/100;
        flag=1;
        while(1)
        {
            if(flag)
            {
               dis_climb=u;
               flag=0;
            }
            else
            dis_climb-=f;
            if(dis_climb<0)
                dis_climb=0;
            after_climb=in_h+dis_climb;
            after_slide=after_climb-d;
            if(after_climb>h)
            {
                cout<<"success on day "<<day<<endl;
                break;
            }
            if(after_slide<0)
            {
                cout<<"failure on day "<<day<<endl;
                break;
            }
            in_h=after_slide;
            day++;
        }

    }
    return 0;
}
