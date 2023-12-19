#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("date.txt");
int main()
{
    int a, b, c, d1, d2, x, n=0;
    fin>>a>>b>>c;
    d1=a+b+c;
    a=b; b=c;
    while(fin>>c)
    {
        d2=a+b+c;

        if(d2>d1)
        {
            n++;
        }

        d1=d2;
        a=b; b=c;
    }
    cout<<n;
    return 0;
}
