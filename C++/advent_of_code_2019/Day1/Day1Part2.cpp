#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("date.txt");
int main()
{
    int x;
    long long s=0;
    while(fin>>x)
    {
        int n=0;
        while(x>0)
        {
            n=x/3-2;
            if(n>=0)
                s+=n;
            x=n;
        }
    }
    cout<<s;
    return 0;
}
