#include <iostream>

using namespace std;

int main()
{
    string s;
    char input[]= " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ`1234567890-=[]\\;',./";
    char output[]="  czaqsdfyghjbvui w etx  r  czaqsdfyghjbvui w etx  r   `1234567890op[klnm,";
    int i,j,len_s,len_in;
    getline(cin,s);
    len_s=s.length();
    for(i=0;i<len_s;i++)
    {
        for(j=0;input[j];j++)
        {
            if(s[i]==input[j])
            {
                cout<<output[j];
                break;
            }

        }
    }
    cout<<endl;
    return 0;
}
