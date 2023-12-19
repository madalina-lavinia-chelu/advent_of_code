#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("date.txt");
int main()
{
    char s[10];
    int x=0, y=0, a=0, b;
    while(fin>>s)
    {
        fin>>b;
        if(strcmp(s,"forward")==0)
        {
            x+=b;
            y+=a*b;
        }
        if(strcmp(s,"down")==0)
        {
            a+=b;
        }
        if(strcmp(s, "up")==0)
        {
            a-=b;
        }
    }
    cout<<x*y;
    return 0;
}
