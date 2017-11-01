#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    int i,ii,iii,iv,v,vi,vii,viii,ix;
    int min;
    string bin;
    while(cin>>i>>ii>>iii>>iv>>v>>vi>>vii>>viii>>ix)
    {
        min=pow(2,31);
        if((iv+vii+iii+ix+ii+v)<min)
        {
            min=(iv+vii+iii+ix+ii+v);
            bin="BCG";
        }
        if((iv+vii+ii+viii+iii+vi)<=min)
        {
            if((iv+vii+ii+viii+iii+vi)!=min)
            {
               bin="BGC";
            }
            min=(iv+vii+ii+viii+iii+vi);

        }
        if((vi+ix+i+vii+ii+v)<=min)
        {

            if((vi+ix+i+vii+ii+v)!=min)
            {
               bin="CBG";
            }
            min=(vi+ix+i+vii+ii+v);

        }
        if((vi+ix+ii+viii+i+iv)<=min)
        {

            if((vi+ix+ii+viii+i+iv)!=min)
            {
               bin="CGB";
            }
            min=(vi+ix+ii+viii+i+iv);

        }
        if((i+iii+v+vi+vii+viii)<=min)
        {

            if((i+iii+v+vi+vii+viii)!=min)
            {
               bin="GBC";
            }
            min=(i+iii+v+vi+vii+viii);

        }
        if((i+iii+iv+v+viii+ix)<=min)
        {

            if((i+iii+iv+v+viii+ix)!=min)
            {
               bin="GCB";
            }
            min=(i+iii+iv+v+viii+ix);

        }
        cout<<bin<<" "<<min<<endl;


    }

    return 0;
}
