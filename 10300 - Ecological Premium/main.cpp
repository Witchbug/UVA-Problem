#include <iostream>

using namespace std;

int main()
{
    int n,farmer,budget;
    float sum,yard,animal,express;
    cin>>n;
    while(n)
    {
        sum=0;
        cin>>farmer;
        while(farmer)
        {
            cin>>yard>>animal>>express;
            sum+=((yard/animal)*express*animal);
            farmer--;
        }
        budget=sum;
        cout<<budget<<endl;
        n--;
    }
    return 0;
}
