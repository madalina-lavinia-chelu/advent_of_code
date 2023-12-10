#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("bac.txt");
int repeat (char s[])
{
    for(int i=1; i<strlen(s) - 1; i++)
    {
        if(s[i-1]==s[i+1])
            return 1;
    }
    return 0;
}
int dublu (char s[])
{
    for(int i=0; i<strlen(s); i++)
    {
        for(int j=i+2; j<strlen(s); j++)
        {
            if(strncmp(s+i,s+j,2)==0)
                return 1;
        }
    }
    return 0;
}
int main()
{
    char s[100];
    int n=0;
    while(fin>>s)
    {
        if(repeat(s)&& dublu(s))
            n++;
    }
    cout<< n;
    return 0;
}
