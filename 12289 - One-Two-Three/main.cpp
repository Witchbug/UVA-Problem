#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    int n;
    cin>>n;
    while(n)
    {
        cin>>word;
        if(word.length()==5)
            cout<<"3"<<endl;
        else if((word[0]=='t' && word[1]=='w') || (word[0]=='t' && word[2]=='o') || (word[1]=='w' && word[2]=='o'))
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
        n--;
    }
    return 0;
}
