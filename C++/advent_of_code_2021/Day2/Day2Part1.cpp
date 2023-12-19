#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("date.txt");
int main()
{
    char s[10];
    int x=0, y=0, a;
    while(fin>>s)
    {
        fin>>a;
        if(strcmp(s,"forward")==0)
        {
            x+=a;
        }
        if(strcmp(s,"down")==0)
        {
            y+=a;
        }
        if(strcmp(s, "up")==0)
        {
            y-=a;
        }
    }
    cout<<x*y;
    return 0;
}
